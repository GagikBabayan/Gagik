#include <iostream>

using namespace std;

int main () {

int chickens,cow,pigs;

cout << "Numbers of chickens " ;
cin  >> chickens;

cout << "Numbers of cow " ;
cin  >> cow;

cout << "Numbers of pigs ";
cin  >> pigs;

int sum;

sum = chickens * 2 + 4 * (cow + pigs);

cout << "Result = " << sum << endl;

return(0);
}
