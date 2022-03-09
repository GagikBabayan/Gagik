#include <iostream>
 
 using namespace std;
 
 
void tree1(int i){

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
 
 
}
  
void tree2(int i){
 int j = 1;
 
 
 
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


}
 
 void tree3 (int i) {
 int  j = 1;
 

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
    int i;   

   cout << "Input Higth: ";
   cin  >>  i;
 
 tree1(i);
 
 cout << endl << endl;

 tree2(i);

 cout << endl << endl;

 tree3(i);

 cout << endl << endl;


 return(0);
 }
                                                      
