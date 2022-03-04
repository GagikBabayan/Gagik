
/*  Write a program to input week number(1-7) and print day of week name using switch case. 
  Program to find week day name using switch case. How to find day name of week using switch case in programming.

  Example
  Input week number(1-7): 2
  Output
  Tuesday        
*/



#include <iostream>

using namespace std;

int main () {

int  week;

cout << "Input week number(1-7) ";
cin  >> week;

cout << "Output ";

switch (week) {

case 1:  cout << "Monday";    break;

case 2:  cout << "Tuesday";   break;

case 3:  cout << "Wednesday"; break;

case 4:  cout << "Thursday";  break;

case 5:  cout << "Friday";    break;

case 6:  cout << "Saturday";  break;

default: cout << "Sunday";  

}
cout << endl;

return(0);
}
