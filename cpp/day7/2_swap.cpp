#include <iostream>

using namespace std;


void rev(int *pa,int *pb) {

  int temp = *pa;

  *pa = *pb;

  *pb = temp;

}



int main () {

  int a,b;

  cout << "Input a: ";
  cin  >> a;

  cout << "Input b: ";
  cin  >> b;


  rev(&a,&b);


  cout << "a = " << a << endl;

  cout << "b = " << b << endl;


return 0;

}
