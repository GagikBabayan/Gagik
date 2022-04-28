#ifndef _BUBBLESORT_H_
#define _BUBBLESORT_H_

int* BubbleSort(int* arr1,int size){

    for(int  i = 0; i < size; i++){
        bool checkSwap = false;
        for(int j = 0; j < size - i - 1; j++){
            if(arr1[j] > arr1[j + 1]){
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
                checkSwap = true;
            }
        }
        if(!checkSwap){
            break;
        }
    }
    return arr1;
}
   
#endif