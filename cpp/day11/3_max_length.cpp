#include <iostream>
#include <stdlib.h>
using namespace std;

int check(int* , int , int );

int main() {
    int n, max = 0, index, num;  

    cout << "Input size:";
    cin >> n;

    int *arr = new int[n];

   

    for(int i = 0; i < n; i ++){                                  // random 
        arr[i] = (rand()%2000 - 1000) / 10.0;
    }    

    cout << "Array =  ";

    for(int i = 0; i < n; i ++) {
        cout << arr[i] << ", ";
    }
    
    cout << endl;    

    for(int i = 0; i < n; i ++) {
        num = check(arr, i, n);
        
        if(num > max){
            max = num;
            index = i;
        }
    }

    cout << "Output: ";

    for(int i = index; i <= index + max; i++) {
        cout << arr[i] << ", ";
    }

    cout << endl;

 return 0;
}


int check(int* arr,int origin, int n) {
    int check = 0;
  
    for(int i = origin; i < n - 1; i ++) {
        if(arr[i] <= arr[i + 1]) {
            check ++;
        }
        else{
            break;
        }   
   }

  return check;
}
