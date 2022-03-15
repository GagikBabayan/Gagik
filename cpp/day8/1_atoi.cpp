#include <iostream>

using namespace std;

int myfun (char* at);                                        // Myfun

int main(int argc,char *argv[]) {

    int sum = 0,sum1 = 0;
    

    cout << argc;  
  
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


int myfun(char* at) {

    int result = 0;

    for (int i = 0;at[i] != '\0'; ++i) {                        //Myfun

            if(at[i] >= 48 && at[i] <= 57) {
    
                    result = result * 10  + at[i] - '0';
            }

            else {
                  result = 0;
            }

    }


  return result;
}
