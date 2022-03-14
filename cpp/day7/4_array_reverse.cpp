#include <iostream> 
 
using namespace std;
 
int main()
{

    const int size = 5;

    int array[size];
 
    int * index = array;
 
    for (int i = 0; i < size; i++) {
        
        cin >> *(index + i);
    }
 
  
    int *leng = array + size - 1; 
    
    int temp; 
  
    for (int i = 0; i < size; i++) {

        temp = *(index + i); 

        *(index + i)  = *(leng - i);

        *(leng - i) = temp;

    }

 
    for(int i = 0;i< size;i++) {
    
        cout << *(leng - i) << " ";

    }


   cout << endl;


return 0;

}
