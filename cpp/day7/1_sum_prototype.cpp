#include <iostream>
  
using namespace std;
  
  
void sum1 (int *a,int *b,int *sum);     // sum1

void sum2 (int &a,int &b,int &sum);     // sum2
  
void sum3 (int  a,int  b,int &sum);     // sum3  

void sum4 (int  a,int *b,int &sum);     // sum4

void sum5 (int *a,int *b,int &sum);     // sum5

int main () {
  
    int a,b;

    int sum = 0;
  
    cout << "Input a: ";
    cin  >> a;
  
    cout << "Input b: ";
    cin  >> b;
 
  
    sum1(&a,&b,&sum);             //  sum1
  
    cout << sum << endl; 
   

    sum2(a,b,sum);                //  sum2

    cout << sum << endl;

    
    sum3(a,b,sum);                //  sum3

    cout << sum << endl;    


    sum4(a,&b,sum);               //  sum4

    cout << sum << endl;

  
    sum5(&a,&b,sum);              //  sum5

    cout << sum << endl;
  
  
return 0;
  
}


void sum1 (int *a,int *b,int *sum) {      // sum1
  
    *sum = *a + *b;
    
    cout << "sum1 = ";
}


void sum2 (int &a,int &b,int &sum) {      // sum2

    sum = a + b;

    cout << "sum2 = ";
}  


void sum3 (int  a,int  b,int &sum) {      // sum3  

    sum = a + b;

    cout << "sum3 = ";
}    


void sum4 (int  a,int *b,int &sum) {      // sum4

    sum = a + (*b);

    cout << "sum4 = ";
}


void sum5 (int *a,int *b,int &sum) {      // sum5

    sum = (*a) + (*b);

    cout << "sum5 = ";
}
                
