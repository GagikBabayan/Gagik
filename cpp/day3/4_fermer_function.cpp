 #include <iostream>
 
 using namespace std;
 
 int fermer () {
 
 int chickens,cow,pigs;
 
 cout << "Numbers of chickens " ;
 cin  >> chickens;
 
 cout << "Numbers of cow " ;
 cin  >> cow;
 
 cout << "Numbers of pigs ";
 cin  >> pigs;
 
 int sum;
 
 sum = chickens * 2 + 4 * (cow + pigs);
    
   return(sum);
}

int main () {
 
 int sum ;
 sum = fermer(); 

 cout << "Result = " << sum << endl;
 
 return(0);
}

