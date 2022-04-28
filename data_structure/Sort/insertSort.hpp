#ifndef _INSERTSORT_H_
#define _INSERTSORT_H_

int* InsertSort(int* arr2,int size){
for(int i = 1; i < size; i++ ){
        for(int j = i; j  > 0; j--){
            if(arr2[j] < arr2[j - 1]){
                int temp = arr2[j];
                arr2[j] = arr2[j - 1];
                arr2[j - 1] = temp;
            }
            else {
                break;
            }
        }
    }
    return arr2;
}

#endif