#ifndef _QUICK_H_
#define _QUICK_H_

int Partition(int* targetArr, int start, int end) {
    int value = targetArr[end];
    int pos = start;
    
    for (int i = start; i < end ; i++) {
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

int* QuickSort(int* Arr, int start, int end) {
    if (start >= end) {
        return Arr;
    }
   int pivot = Partition(Arr, start, end);
   
   QuickSort(Arr, start, pivot - 1);
   QuickSort(Arr, pivot + 1, end);
   
  return  Arr;
}


#endif


#endif
