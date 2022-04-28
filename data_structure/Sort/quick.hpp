#ifndef _QUICK_H_
#define _QUICK_H_

#include <iostream>
using namespace std;

int Partition(int targetArr[], int start, int end) {
    int value = targetArr[end];
    int pos = start;

    for (int i = start; i < end - 1; i++) {
        if (targetArr[i] <= value) {
            int temp = targetArr[i];
            targetArr[i] = targetArr[pos];
            targetArr[pos] = temp;
            pos++;
        }
    }
    targetArr[end] = targetArr[pos];
    targetArr[pos] = value;

    return pos;
}

int* QuickSort(int Arr[], int start, int end) {
    if (start >= end) {
        return;
    }
   int pivot = Partition(Arr, start, end);
   QuickSort(Arr, start, pivot - 1);
   QuickSort(Arr, pivot, end);
   return Arr;
}


#endif