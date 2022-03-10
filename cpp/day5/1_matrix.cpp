#include <iostream>
#include <stdlib.h>
#include <time.h>
 
using namespace std;
 
 
 
int main() {
    
       srand(time(0));
       const int size = 3;
 
               int  Matrix[size][size];
    
               int sum[8] = { 0,0,0,0,0,0,0,0};
    
       for (int i = 0; i < size; i++) {
    
    
           for (int j = 0; j < size; j++) {
 
               Matrix[i][j] = rand() % 10 + 1;
 
               cout << Matrix[i][j] << " ";
           }
 
           cout << endl;
 
        }
         
       cout << endl << endl;

 
           for (int i = 0; i < size; i++) {
 
               for (int j = 0; j < size; j++) {
 
                   if (i != j && j > i) {         //met glxavor ach 
 
                       sum[0] += Matrix[i][j];
 
                   }
 
                   else if (i != j && j < i) {   //met  glxavor dax
           
                       sum[1] += Matrix[i][j];
 
                   }
                   int a = i + j, b = size - 1;
 
                    if (a != b &&  a  > b ) {    // met  erkrodakan  ach
 
                       sum[2] += Matrix[i][j];
                   }
                    
                   else if ( a != b && a  < b ) {  //met erkrodakan  dax
 
                       sum[3] += Matrix[i][j];
 
                   }
 
                    if (i < j && a < b) {          // poqr   verev
 
                        sum[4] += Matrix[i][j];
                    }
 
                    else if (i > j && a < b) {   // poqr   dax
 
                        sum[5] += Matrix[i][j];
                    }
 
                    else if (i < j && a > b) {   // poqr   ach
 
                        sum[6] += Matrix[i][j];
                    }
                
                    else if (i > j && a > b) {  // poqr  nerqev
 
                        sum[7] += Matrix[i][j];
                    }
                  
 
               }
    
           cout << endl;
    
    
       }
    
 
           for (int i = 0; i < 8; i++) {
 
               cout <<"sum[" << i << "] = " <<  sum[i] << endl;
 
           }
    
           
    
return 0;   
}
