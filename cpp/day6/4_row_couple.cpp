#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
 
int main() {
  srand(time(0));
 
   const  int m = 3, n = 2;
 
   int  matrix[m][n];
   int num = 0;
 
   for (int i = 0; i < m; i++) {
 
       for (int j = 0; j < n; j++) {
 
           matrix[i][j] = rand() % 10;
 
           cout << matrix[i][j] << " ";
 
        }
 
       cout << endl;
 
    }
 
   bool result = true;
 
   for (int i = 0; i < m; i++) {
 
       for (int j = 0; j < n; j++) {
 
           if (matrix[i][j] % 2 == 0) {
 
               num++;
           }
 
       }
 
       if (num == n) {

           cout <<"Couple row = ";         

           for (int k = 0; k < n; k++) {
               cout << matrix[i][k] << " ";
           }

           result = false;
           break;
       }
 
       num = 0;
 
   }

 
   if (result) {
       cout << "No";
   }
 
   cout << endl;
  
 return 0;
 
}
