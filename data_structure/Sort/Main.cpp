    #include <time.h>
    #include <random>
    #include "bubbleSort.hpp"
    #include "insertSort.hpp"
    #include "merge.hpp"
    #include "print.hpp"
    #include "quick.hpp"

    mt19937 gen (time(0)); 

    int MyGenerator() {
    int rand = gen() % 1000;
    return rand;
    }
    
    
    int main () {
    
    const int size = 1500;
    int arr1[size];
    int arr2[size];
    int arr3[size];
    int arr4[size];

    for(int i = 0; i < size;i++){
        arr1[i] =  MyGenerator();
        arr2[i] = arr1[i];
	arr3[i] = arr1[i];
        arr4[i] = arr1[i];
    }

    int *p1 = arr1;
    int *p2 = arr2;
    int *p3 = arr3;
    int *p4 = arr4;
    
    // Print(p1,size);
    clock_t start1 = clock();

    p1 = BubbleSort(arr1,size);

    clock_t end1 = clock();
    double elapsed1 = double(end1- start1)/CLOCKS_PER_SEC;

    cout << "Bubble Sorting" << "\n" << "Size = " << size << "\n";
    cout <<  "Run Time = " << elapsed1;
    cout << endl << endl;

    // Print(p1,size);
    // Print(p2,size);
    clock_t start2 = clock();

    p2 = InsertSort(arr2,size);

    clock_t end2 = clock();
    double elapsed2 = double(end2 - start2)/CLOCKS_PER_SEC;

    cout << "Insert Sorting" << "\n" << "Size = " << size << "\n";
    cout <<  "Run Time = " << elapsed2;
    cout << endl << endl;

    // Print(p2,size);
    // Print(p3,size);
    clock_t start3 = clock();

    // Print(arr3,size);

    p3 = MergeSort(arr3, size);
    
    clock_t end3 = clock();
    double elapsed3 = double(end3- start3)/CLOCKS_PER_SEC;

    cout << "Merge Sorting" << "\n" << "Size = " << size << "\n";
    cout <<  "Run Time = " << elapsed3;
    cout << endl << endl;
    
    // Print(p3,size);

    clock_t start4 = clock();

    p4 = QuickSort(arr4,0,size - 1);
    
    clock_t end4 = clock();
    double elapsed4 = double(end4- start4)/CLOCKS_PER_SEC;

    cout << "Quick Sorting" << "\n" << "Size = " << size << "\n";
    cout <<  "Run Time = " << elapsed4;
    cout << endl;
    
    // Print(p4,size);

    return 0;
}
