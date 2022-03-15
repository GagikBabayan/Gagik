#include <iostream> 
 
using namespace std;
 

void fun(int *index,int size,int arr[]);

int main() {

    const  int size = 5;
    
    int arr[5];
 
    int *index = arr;

    fun(index,size,arr);    

return 0;

}



void fun(int *index,int size ,int arr[]) {

    int sum = 0;

    while( index <= arr + size -1) {
  
    
        cin >> *index;

        sum += *index;

        *index++;
    } 

    cout << sum;

}
