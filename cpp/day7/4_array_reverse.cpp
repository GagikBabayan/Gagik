#include <iostream> 
 
using namespace std;
 
int main()
{

    const int size = 4;
    int array[size];
 
    int * index = array;
 
    for (int i = 0; i < size; i++) {
        
        cin >> *(index + i);
    }
 
  
   
    index = array + size - 1;
  
    

    for (int i = 0; i < size; i++) {
 
        cout << *(index - i) << " ";
    }
 
    
    cout << endl;


return 0;

}
