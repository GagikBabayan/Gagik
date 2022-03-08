#include <iostream>
 
using namespace std;
 
 
double calculator () {  
 
 double number1 = 0,number2 = 0;
 char operation;
 
 cout << "Input Number 1: ";
 cin  >> number1;
 
 cout << number1;
 cout << "Input  +,-,*,/ Operation ";
 cin  >>  operation;
 
 
 cout << "Input Number 2: ";
 cin  >> number2;
 
 
 cout << endl;
 
 
 
 switch (operation) {
 
 case '+': cout << number1 << " + " << number2 << " = " << number1+number2;        break;
 
 case '-': cout << number1 << " - " << number2 << " = " << number1-number2;        break;
 
 case '*': cout << number1 << " * " << number2 << " = " << number1*number2;        break;
 
 
 case '/': if (number2 == 0)   cout << "Error number2 = 0 ";
 
           else cout << number1 << " / " << number2 << " = " << number1/number2;   break;
 

 default:  cout << "Error  this  Operation don't find ";
 
 }
 

 cout << endl;


 return (0);
}

int main () {


calculator();



return(0);
}
