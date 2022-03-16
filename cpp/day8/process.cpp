#include "mylib.h"

int myfun(char* at) {
 
     int result = 0;
 
     for (int i = (at[0] == '-') ? 1: 0;at[i] != '\0'; ++i) {                        //Myatoi
 
             if(at[i] >= 48 && at[i] <= 57) {
     
                     result = result * 10  + at[i] - '0';
             }
 
             else {
                   break;
             }
 
     }

    if (at[0] == '-') return  -result;

  
  return result;

}

