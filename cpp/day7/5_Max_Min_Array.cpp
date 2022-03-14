#include <iostream> 
 
using namespace std;
 
int main(){

    const int size = 4;

    int array[size];
 
    int *index = array;
 

    for (int i = 0; i < size; i++) {

        cin >> *(index + i);
    }


    int  max = *index ,min = *index;

    int *big  = &min;

    int *small  = &max;
 

    for (int i = 0; i < size; i++) {
 
        if( *(index+i) > *big) {

            *big = *(index + i);
        }

    
        if( *(index + i ) <  *small) {

            *small = *(index + i);
        } 
 
    }
  
    cout << endl;  
  
    cout << "Max = " << max << endl;

    cout << "Min = " << min << endl;

 
    return 0;
}
