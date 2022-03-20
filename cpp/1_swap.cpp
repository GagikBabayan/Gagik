#include <iostream>
#include <time.h>
#include <cstdlib>
#include <math.h>
using namespace std;
 
int length(int num);
void function(int* index, int size, int number);
void swap(int* index,int size);
int print(int size, int* index);
 
int main() {
    
    int number;
    cout << "Input number: ";
    cin >> number;
   
    int size = length(number);
 
    int* index = new  int [size];
 
    function(index,size,number);
 
    swap(index,size);
  
    number = print(size, index);
       
    cout << "Output: " << number;
 
    delete[] index;
 
    return 0;
}
 
int length(int num) {                // length  of number
    int len = 0;
    while (num != 0) {
        len++;
        num /= 10;
    }
 
    return len;
}
 
void function(int* index, int size, int number) {   // number input  in array
    for (int i = 1; number != 0; i++) {
        index[size - i] = number % 10;
        number /= 10;
    }
 
}
 
void swap(int* index,int size) {                             // swap 
    int swap1, swap2;
    cout << "Input positions to swap1: ";
    cin >> swap1;
    cout << "Input positions to swap2: ";
    cin >> swap2;
 
    if(swap1 > 0 && swap2 > 0 && swap1 < size && swap2 < size) { 
      int temp = index[swap1 - 1];
      index[swap1 - 1] = index[swap2 - 1];
      index[swap2 - 1] = temp;
    }

    else {
      cout << "Error size is  1 - " << size << "\n";
    }
}
 
int print(int size, int* index) {           //  output  reverse number
    int number = 0;
    for (int i = 0; i < size; i++) {
 
        number += index[i] * pow(10, size - i - 1);
 
    }
 
    return number;
}
