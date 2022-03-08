#include <iostream>
 
 using namespace std;
 
 
 
 int alphabet (char  letter) { 
 
 
   if(( letter >= 'a'  && letter <= 'z') || (letter >= 'A' && letter <= 'Z')){

       switch (letter) {
 
         case 'a':
         case 'e':
         case 'i':
         case 'o':
         case 'u':
         case 'A':
         case 'E':
         case 'I':
         case 'O':
         case 'U':     return 0;    break;
 
 
         default:      return 1;
 
       }
 
   }

  else   return 3;

}


int main () {
 
 char  letter;
 int   num ; 

 cout << "Input letter: ";
 cin  >> letter;

 num = alphabet (letter);

 if ( num == 0) {
 
   cout <<  letter << " is vowel "; 

 } else if (num == 1) {

   cout <<  letter << " is consonant";

   } else {

     cout << "Invalid input! Please input  letter  a-z or A-Z";

     }

 cout << endl;
 

return(0);
}
