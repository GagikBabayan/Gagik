#include <iostream>

using namespace std;
 

 
void  function( double  length,double width) {
 
double  P,S;
 
 S = length * width ;
 
 P = 2 * (length + width) ;
 
 cout << "S = " << S << endl ;
 cout << "P = " << P << endl ;


}

int main () {

double  length,width;

  cout << "Input length " ;
  cin  >> length;
     
  cout << "Input  width " ;
  cin  >> width;
     

function (length,width);


 
 return(0);
}

