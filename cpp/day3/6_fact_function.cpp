#include <iostream>

using namespace std;


int factorial (int number) {

  if ( number > 1) {
     return ( factorial(number - 1) * number);

  } else {
  
     return  1;  

   }

}


 int main () {

 int number;

 cout << "Input Integer Number: ";
 cin  >> number;

 
cout << endl << number << "! = " << factorial (number);

 
  return (0);

}
