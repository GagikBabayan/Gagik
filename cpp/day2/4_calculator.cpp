/*
 Write a program to create menu driven calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case and functions.
The calculator should input two numbers and an operator from user. It should perform operation according to the operator entered and must  output in given format.
<number 1> <operator> <number 2> = <result>

Example
Input number 1: 5.2
Input operator: +
Input number 2: 3
 
Input number 1: 2
Input operator: *
Input number 2: 3.2
Output
5.2 + 3 = 8.2
2 * 3.2 = 6.4

*/


#include <iostream>

using namespace std;

int main ()  {

double number1,number2;
char operation;

cout << "Input Number 1: ";
cin  >> number1;

cout << "Input  +,-,*,/ Operation ";
cin  >>  operation;

cout << "Input Number 2: ";
cin  >> number2;

switch (operation) {

case '+': cout << number1 << " + " << number2 << " = " << number1+number2;     break;

case '-': cout << number1 << " - " << number2 << " = " << number1-number2;     break;

case '*': cout << number1 << " * " << number2 << " = " << number1*number2;     break;

case '/': cout << number1 << " / " << number2 << " = " << number1/number2;     break;

default:  cout << "Error this  Operation don't find ";

}

cout << endl;


return(0);
}
