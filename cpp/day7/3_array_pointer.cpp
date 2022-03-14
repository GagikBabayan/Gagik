#include <iostream> 
 
using namespace std;
 
int main() {

    int array[10];
 
    int  *index = array;

 
    for (int i = 0; i < 10; i++) {
        
          cin >> *(index + i);
    }

 
    for (int i = 0; i < 10; i++) {
 
          cout << *(index + i) << " "; 
    }


    cout << endl;
 
return 0;

}
