#include <iostream>
#include <stdlib.h>     
#include <time.h>       
  
using namespace std;



void  ArrayPrint(int Array[],int a) {

  for (int i = 0; i < a; i++) {


   cout << Array[i] << " ";

  }


 
}



int main () {
  srand (time(0));

  const  int a =10;

  int Array[a];


   for(int i = 0; i < a; i++){

      Array[i] = rand () % 30;
  

    }
 
    ArrayPrint(Array,a);

    cout << endl;


   
 for(int i = 0; i < a; i++) {

       for(int k = 0; k < a-1; k++){

            if (Array[k] > Array[k + 1]) {

               int  m = Array[k];

               Array[k] = Array[k + 1]; 
   
               Array[k + 1] = m;
           }

       }


 }

   ArrayPrint(Array,a);

   cout << endl;

 return 0;
}






