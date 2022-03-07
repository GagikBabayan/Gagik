 #include <iostream>
 
 using namespace std;
 
void leap () {
 
 int num;
 int b=0;
 
 cout << "Input Year ";
 cin  >>  num ;
 
 
 
 
 while (!((num % 4 == 0) &&(num % 100 != 0)) ||  ((num % 100 == 0) && (num % 400 != 0))) {

    num++;
 }
 
 while (b < 20) {
       cout << num << endl;
       num+=4;
       b++;
 }

 
}


int main () {

 leap();

return (0);

}
