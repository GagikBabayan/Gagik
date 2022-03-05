#include <iostream>

using namespace std;

int main () {

int i;
int j = 0;

cout << "Input Higth: ";
cin  >>  i;


while(j <= i) {

int k = j;


   while (k > 0) {
  
      cout << "*" ;
      k--;
   }

cout << endl;
j++;

}

 
 cout << endl << endl ;
 j = 1; 



while ( j <= i){
   
int k = i;
  
      while (k >= 1){
               
            if (k <= j) {
             cout << "*";
            }
     
            else {
              cout << " ";
            }
 
            --k;
      }
 
 
cout << endl;
j++;

}

cout << endl << endl ;
j = 1;


while ( j <= i){

int k = i ;

     while (k >= 1){
            
           if (k <= j) {
            cout << "*" << " ";
           }
           
           else {
             cout << " ";
           }

           --k;
     }


cout << endl;
j++;

}





return(0);
}
