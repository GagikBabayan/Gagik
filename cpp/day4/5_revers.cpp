#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


void ArrayPrint(int Array[],int a) {


  for(int i = 0; i < a; i++){

      cout << Array[i] << " ";
  
  }


}




int main () {

srand (time(0));

const int a = 5;

int Array[a];


  for(int i = 0; i < a; i++){


      Array[i] = rand () % 20;

  }

   ArrayPrint(Array,a);

   cout << endl;

     for (int k = 0; k < a/2; k++) {

          int num = Array[k];

          Array[k] = Array[a -1- k];
    
         Array[a - 1-k] = num;
    }


   ArrayPrint(Array,a);
  
   cout << endl;  


return 0;
}

