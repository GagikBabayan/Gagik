#include <iostream>

using namespace std;



int Absolutely(int num) {

  int sum = 0,k;

  k = num;

  for (int i = 1; i < k; i++) {


       if (k % i == 0) {
  
         sum += i;
       }

  }

  return (num == sum);
} 


int main (){

  int num;

  cout << "Input number: ";
  cin  >> num;


  if ( Absolutely(num)){

  cout << num << " is absolutely number " << endl;
 
  }
 
  else {

  cout << num << " isn't absolutely number " <<endl;  

  } 


 return 0;
}
