#include <iostream>

using namespace std;


int transfer(int num) {

   int bin = 0,  m =1;

   while (num) {

     bin += (num % 2) * m;
     m *= 10;
     num /= 2;
    }

    return bin;
}

int main () {
  int num,temp;

  cout << "Input number: ";
  cin  >>  num;

  temp = transfer(num);

  cout << "(tranfer to system 2) " << num << "  = " <<  temp << endl;



return 0;
}
