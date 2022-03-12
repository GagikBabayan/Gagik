#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
 

int check(int a) {

  for(int i = 1;i < a;i++){

      for(int j = 1;j < a;j++){

          if((i * i + j * j)  == a && a % 5 == 0){

             cout << i << "^2 + " << j << "^2 = " << a << endl; 

              return(a); 

          }
      }
  }   
 

    return 0;

}

int main() {
  srand(time(0));
 
   const  int m = 4, n = 2;
 
   int  matrix[m][n];
   int a = 0 ,b = 0;
 
   for (int i = 0; i < m; i++) {
 
       for (int j = 0; j < n; j++) {
 
            do { 

                  a = rand () % 200 + 1;

                       
              
                b = check(a);              
      

           } while(b == 0);
       
 
            matrix[i][j] = b;

       }
 
       cout << endl;
 
    }


  for(int i = 0;i < m;i++) {

      for(int j = 0;j < n;j++) {


          cout << matrix[i][j] << " ";

      }

      cout << endl;

  }




return 0;
}
