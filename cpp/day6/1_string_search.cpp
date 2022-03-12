#include <iostream>
#include <string.h>
using namespace std;




int main () {

  string text;

  cout << "Enter text: ";
 
  getline(cin,text);

  int sum = 0, num = 0;

    for(int i = 0;i < text.length();i++){

        if(text[i] == 'B' &&  text[i] != ' '){


           num++;

        }


        if ((num == 2 && text[i] == ' ') || (num == 2 && text[i+1] == '\0')){

          num = 0;

          sum ++;
       
        }

        if(text[i] == ' '){

         num = 0;
    
        } 

    }

  cout << sum << endl;
 

return 0;
}
