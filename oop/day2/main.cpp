#include <iostream>
#include "polynomial.h"
using namespace std;

int main () {
  int degree1,degree2;
   
  cout << "Enter a degree for the first polynomial: ";
  cin >> degree1;
 
  int *arr1 = new int [degree1 + 1];
  int *arr2 = new int [degree2 + 1];
  
  for (int i = degree1; i >= 0; i--) {
    cout << "   Enter a coefficient of x^" << i << ": ";
    cin >> arr1[i];
  }
 
  cout << "Enter a degree for the second polynomial: ";
  cin >> degree2;
  
   for (int i = degree2; i >= 0; i--) {
       cout << "   Enter a coefficient of x^" << i << ": ";
       cin >> arr2[i];
   }


 Polynomial a(degree1,degree2,arr1,arr2);
  a.Add();
  a.Subtract();
  a.Multiply();




return 0;
}
