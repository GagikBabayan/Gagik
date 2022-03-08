#include <iostream>
 
 using namespace std;
 
 
 int MonthDay (int month) {
 
 

 
  cout << "Total number of days = ";
 
  switch (month) {
 
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12:  return 0;  break;
 
   case 4:
   case 6:
   case 9:
   case 11:  return 1;  break;
 
   case 2:   return 2;  break;
 
 
  default:  return 3;
 
  }

 }

int main () {
    int month,num;
 
  cout << "Input month number: ";
  cin  >> month;

 num = MonthDay (month);

  if (num == 0 ) {

     cout << "31";
  
  } else if (num == 1){

     cout << "30";

    } else if (num == 2) {
       
      cout << "28 or 29";

      }  else {

           cout  << "This month don't  exist ";
         }



  cout << endl;
 
 
 return(0);
}

