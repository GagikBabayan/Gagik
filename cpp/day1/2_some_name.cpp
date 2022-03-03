#include <iostream>

using namespace std;

int main ()  {

int a;

do {

cout << "Input Number ";
cin >> a;

} while(a <= 0 || a > 10 );

int b=1;

do {
 cout << a <<" * " << b << " = " << a * b;
 cout << endl;
 b++;
} while(b <= 10);


return (0);
}
