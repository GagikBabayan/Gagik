/*
Write a program to input an alphabet and check whether it is vowel or consonant using switch case.
 program to check vowel or consonant using switch case. Logic to check vowel or consonant using switch case.

Example
InputInput alphabet: c
Output
'c' is consonant

*/




#include <iostream>

using namespace std;

int main () {


char  letter;

cout << "Input letter: ";
cin  >> letter;

cout << letter;

switch (letter) {

case 'a':
case 'e':
case 'i':
case 'o':
case 'u':   
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':      cout << " is vowel ";    break;


default:       cout << " is consonant"; 

}


cout << endl;


return(0);
}
