#include <iostream>
 
 using namespace std;
 
 
 void   WeekDay (int week) { 

 cout << "Output ";
 
 switch (week) {
 
 case 1:  cout << "Monday";    break;
 
 case 2:  cout << "Tuesday";   break;
 
 case 3:  cout << "Wednesday"; break;
 
 case 4:  cout << "Thursday";  break;
 
 case 5:  cout << "Friday";    break;
 
 case 6:  cout << "Saturday";  break;
 
 case 7:  cout << "Sunday";    break;
 
 default: cout << "Invalid input! Please enter  week number between 1-7";
 
 }
 cout << endl;
 
 }

 

int main () {

 int week;

 cout << "Input week number(1-7) ";
 cin  >> week;

 WeekDay(week);

 return(0);
}
