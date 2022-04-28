#ifndef _MERGE_H_
#define _MERGE_H_

int* Merge(int arr1[], int arr2[], int size1, int size2) {
    int  temp1 = 0;
    int  temp2 = 0;

    int* arr3 = new int [size1 + size2];
    int  k = 0;
    while (temp1 < size1 && temp2 < size2){

        while(temp1 < size1 && arr1[temp1] < arr2[temp2]){
            arr3[k] = arr1[temp1];
            temp1++;
            k++;
        }

        while (temp2 < size2 && arr1[temp1] >= arr2[temp2]){
            arr3[k] = arr2[temp2];
            temp2++;
            k++;
        }

    }
    if(temp1 == size1){
        for(int i = temp2; i < size2; i++){
            arr3[k] = arr2[i];
            k++;
        }
    } else {
        for(int i = temp1; i < size1; i++){
            arr3[k] = arr1[i];
            k++;
        }
    }

    return arr3;

}


int* MergeSort(int* arr, int size){
    if (size == 1) {
        return arr;
    }
    int m = size / 2;
    int* arr1 = new int[m];
    int* arr2 = new int[size - m];
    for (int i = 0; i < m; i++) {
        arr1[i] = arr[i];
    }
    for (int i = 0; i < size - m;i++) {
        arr2[i] = arr[m + i];
    }
    arr1 = MergeSort(arr1, m);
    arr2 = MergeSort(arr2, size - m);

    return Merge(arr1, arr2, m, size - m);
}



#endif 