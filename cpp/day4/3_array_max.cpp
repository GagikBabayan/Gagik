#include <iostream>
#include <stdlib.h>     
#include <time.h>       



using namespace std;


int main () {

srand (time(0));

  int Num[10];

 
  for(int i = 0; i < 10; i++){
 

   Num[i] = rand () % 20;
   
   cout << Num [i] << " "; 

  }


  cout << endl;
 
  int Max = Num[0];


 for (int k = 0; k < 10; k++) {

     if(Num[k] > Max) {

        Max = Num[k];
     }
 
 }

  
  cout << "Max = " << Max << endl;

return 0;
}

