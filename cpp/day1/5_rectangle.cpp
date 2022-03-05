#include <iostream>

using namespace std;

int main () {

int length,width;

cout << "Input length " ;
cin  >> length;

cout << "Input  width " ;
cin  >> width;

int P,S;

S = length * width ;

P = 2 * (length + width) ;

cout << "S = " << S << endl ;
cout << "P = " << P << endl ;

return(0);
}
