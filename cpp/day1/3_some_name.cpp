#include <iostream>

using namespace std;

int main () {

int num;
int b=0;

cout << "Input Year ";
cin  >>  num ;

if (((num % 4 == 0) &&(num % 100 != 0)) ||  ((num % 100 == 0) && (num % 400 !=0))) {

    while (b < 20) {
      cout << num << endl;
      num+=4;
      b++;
    }
 
}

else  cout << "This year is not leap ";

return(0);
}
