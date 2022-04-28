#ifndef _PRINT_H_
#define _PRINT_H_

#include <iostream>
using namespace std;

void Print(int arr[],int size){
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

#endif 