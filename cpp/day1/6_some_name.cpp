#include <iostream>

using namespace std;

int main () {

int num,temp ;

cout << "Input number " ;
cin  >> num;

temp = num - 1 ;

while(temp > 1 ) {

   num *= temp ;
   temp--;
  
}
 
 cout << num << endl;

return(0);
}
