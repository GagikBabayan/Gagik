#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main () {

  srand (time(0));

  const  int m = 2, n = 4;
 
  int Max,Min;  

  int  matrix[m][n];



  for(int i = 0;i < m;i++) {


      for(int j = 0;j < n;j++) {


          matrix[i][j] = rand () % 10;

          cout << matrix[i][j] << " ";
          
      }

      cout << endl;
  }


  for(int i = 0;i < m;i++) {

      Max = 0;
      Min = 0;
      

      for(int j = 1;j < n;j++) {

          if(matrix[i,j] > matrix[i,Max]) {
    
             Max = j;
          }

          if(matrix[i,j] < matrix[i,Min]) {

             Min = j;
          }
      }


          matrix[i][Min] = matrix[i][Max] + matrix[i][Min];

          matrix[i][Max] = matrix[i][Min] - matrix[i][Max];

          matrix[i][Min] = matrix[i][Min] - matrix[i][Max];
          

  }  

    cout << endl << endl;

    for(int i = 0;i < m;i++) {
 
 
       for(int j = 0;j < n;j++) {
 
 
          cout <<  matrix[i][j] << " ";
 
       }
  
      cout << endl; 

   }





return 0;
}
