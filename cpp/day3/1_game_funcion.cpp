 #include <iostream>
 
 using namespace std;
 
int FindNumber(){

 int a,b;

 do {
  cout << "Number KEY (Input 0-100)"<<endl;
  cin  >>  a;

  } while (a < 0 || a > 100);

 
 cout << endl;
 

 do {

    cout << "Input your number" << endl;
    cin >> b;
 

      if(a < b) {
         cout << "a < " << b;
      }


      if(a > b) {
         cout << "a > " << b;
      }

     
   cout << endl << endl;

 
 } while (a != b);

 
 return 1 ;

}


int main () { 


 if(FindNumber() ) {
  
    cout << "You  Win " << endl;
 
 } else {

   cout << "Error " << endl; 

  }

 

 return(0);
}

