#include <iostream>
 
 using namespace std;
 
 
int tree(int i){

 int j = 0;
 
 
 
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

}

int main () { 
   cout << "Input Higth: ";
   cin  >>  i;
 
 tree(i);
 
 return(0);
 }
                                                      
