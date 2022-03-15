#include <iostream> 
 
using namespace std;


void swap(int* a,int* b) {
	
	*b = *a;
}


void reverse(int array[], int array_size,int* max,int* min)
{


	int *pointer1 = array,


  *pointer2 = array + array_size - 1;
     
  cout << endl <<*pointer2;


	while (pointer1 > pointer2) {
	
      if (*pointer1 > *max) {

          cout << pointer2 << "   ";

    	    swap(pointer1,max);
      }
		
      pointer1++;
	}

    pointer1 = array;

    pointer2 = array + array_size -1;

  while (pointer1 > pointer2) {

    if (*pointer1 < *min) {
     
        cout << pointer1 << "   "; 
    
        swap(pointer1,min);
    }
  
      pointer1++;

  }

}


void print(int* array, int array_size) {


	int *length = array + array_size,

	*position = array;

	cout << "Array = ";

	  for (position = array; position < length; position++) {
	
      	cout << *position << " ";
    }
}


void input(int* array,int array_size) {

  int  *length = array + array_size;

  int  *pasition = array;

    for (pasition = array; pasition < length;pasition++){
  
        cin >> *pasition;
     }
}


 
int main(){

    const int size = 4;

    int array[size];
 
    int *index = array;
 
    input (array,size);

    int  max = *index, min = *index; 

    print (array,size);

    reverse (array,size,&max,&min); 
    
    
 
    
    cout << "Max = " << max << endl;

    cout << "Min = " << min << endl;

 
return 0;

}
