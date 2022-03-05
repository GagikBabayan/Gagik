/*
Write a program to input month number and print total number of days in month using switch...case.
 program to find total number of days in a month using switch...case. Logic to print number of days in a month using switch...case in C programming.

Example
Input month number: 3
Output
Total number of days = 31
*/




#include <iostream>

using namespace std;

int main () {

int month;

cout << "Input month number: ";
cin  >> month;

cout << "Total number of days = ";

switch (month) {

case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:  cout  << "31";  break;

case 4:
case 6:
case 9:
case 11:  cout  << "30";  break;

case 2:   cout  << "28";  break;


default:  cout  << "This month don't  exist ";

}

 cout <<endl;


return(0);
}
