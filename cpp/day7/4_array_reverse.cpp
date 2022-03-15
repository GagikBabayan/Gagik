

#include <iostream>
using namespace std;


void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


void reverse(int array[], int array_size)
{


	int *pointer1 = array,


		*pointer2 = array + array_size - 1;

	while (pointer1 < pointer2) {
	
    	swap(pointer1, pointer2);
		
      pointer1++;
		
      pointer2--;
	}
}


void print(int* array, int array_size)
{


	int *length = array + array_size,


	*position = array;

	cout << "Array = ";

	for (position = array; position < length; position++)
	
  	cout << *position << " ";
  }


int main()
{
  const int size = 6;
    
	int array[] = { 2, 4, -6, 5, 6, -1 };

	cout << "Original ";

	print(array, size);

  cout << endl;

	cout << "Reverse ";

	reverse(array, 6);

	print(array, 6);

  cout << endl;

	return 0;
}

