#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
 



int main() {
  srand(time(0));
 
   const  int n = 2;
 
   int  first[n][n],second[n][n],finish[n][n];
   int a = 0, b = 0;
 
   for (int i = 0; i < n; i++) {                 // Matrix  first
 
       for (int j = 0; j < n; j++) {
                                                                    
 
           first[i][j] = rand () % 10 + 1;

           cout << first[i][j] << " ";
       }
 
       cout << endl;
 
   }

   cout << endl;  

   for(int i = 0;i < n;i++) {

      for(int j = 0;j < n;j++) {

          second[i][j] = rand () % 10 + 1;      // Matrix  second

          cout << second[i][j] << " ";


      }


      cout << endl;

  }

    cout << endl;
  

  for(int i = 0;i < n;i++) {

      for(int j = 0;j < n;j++) {

         finish[i][j] = first[i][j] + second[i][j];     //Matrix finish
    
         cout << finish[i][j] << " ";  

      }

      cout << endl;

  }


  cout << endl;

return 0;
}
