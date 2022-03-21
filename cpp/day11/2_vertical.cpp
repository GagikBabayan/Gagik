#include <iostream>

using namespace std;

int main () {
  int  x1,y1, x2,y2, x3,y3, x4,y4;

  cout << "A: x1: ";              // point A coordinates
  cin  >> x1 ;
  cout << "   " << "y1: ";
  cin  >> y1;

  cout << endl;

  cout << "B: x2: ";              // point B coordinates
  cin  >> x2 ;
  cout << "   " << "y2: ";
  cin  >> y2;

  cout << endl;

  cout << "C: x3: ";              // point C coordinates
  cin  >> x3 ;
  cout << "   " << "y3: ";
  cin  >> y3;

  cout << endl;

  cout << "D: x4: ";              // point D coordinates
  cin  >> x4 ;
  cout << "   " << "y4: ";
  cin  >> y4;

  cout << endl;

  if(y1 == y2 && x3 == x4){       //  check

      cout << "Yes" << endl;

  }

  else {

      cout << "No" << endl;
  }
  





  return 0;
}
