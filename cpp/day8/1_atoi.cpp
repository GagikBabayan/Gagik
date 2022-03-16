#include <iostream>
#include "mylib.h"
using namespace std;


int main(int argc,char *argv[]) {

    int sum = 0,sum1 = 0;
    

    
  
    for(int  i = 1;i < argc;i++){                             // Myfun

        sum += myfun(argv[i]);    
    
    }

    cout << " My  atio = " <<  sum << endl;

   
    for(int i = 1;i < argc;i++) {                             // atoi

        sum1 += atoi(argv[i]);
    
    }
   

    cout << "atoi =  "  << sum1 << endl;


    return 0;
}




