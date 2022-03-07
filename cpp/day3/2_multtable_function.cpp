#include <iostream>
 
using namespace std;
 

void multtable () {
 
  int a;

   do {
 
      cout << "Input Number ";
      cin >> a;
 
   } while(a <= 0 || a > 10 );
 
  
  int b=1;
 
    do {
      cout << a <<" * " << b << " = " << a * b << endl;
      b++;
  
    } while(b <= 10);


}

int main () {


 multtable();

 
 return (0);
}

