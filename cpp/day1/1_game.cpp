#include <iostream>

using namespace std;

int main () {

int a,b;

do {
 cout << "Number KEY "<<endl;
 cin  >>  a;
} while (a < 0 || a > 100);

cout << endl;

do {
 cout << "Input your number" << endl;
 cin >> b;

 if(a < b) {
    cout << "a < " << b;
 }

 if(a > b) {
    cout << "a > " << b;
 }

   cout << endl << endl;

} while (a != b);



if(a == b) cout << "You  Win ";

return(0);
}
