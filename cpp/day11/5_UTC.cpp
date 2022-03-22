#include <iostream>
using namespace std;

string UnixToHuman (long int);

int main(){
  long int sec ;
  cout << "Input seconds: ";
  cin >> sec;

  string result =  UnixToHuman(sec);
  cout << "UTC: " << result << "\n";
	
  return 0;
}

string UnixToHuman(long int seconds) {

  string result = "";

  int daysOfMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  long int Year, days, Time, Days, index, date, month, hours, minutes, check = 0;

  days = seconds / (24 * 60 *60);
  cout << "days: " << days <<endl;
  Time = seconds % (24 * 60 *60);
  cout <<"Time: " << Time <<endl;
  Year = 1970;	

  while (days >= 365) {
		if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))  {
			days -= 366;
		}
		else  {
			days -= 365;
		}

    Year += 1;
	}

  cout << "Days: " << days << endl;
  Days = days + 1;	
  cout << "Year: " << Year << endl;

  if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0)) {
    check = 1;
	}
	month = 0, index = 0;

  if (check == 1) {
    while (true)  {
      if (index == 1) {
        if (Days - 29 < 0) {
            break;
        }
        month ++;
        Days -= 29;
        }
      else {
        if (Days - daysOfMonth[index] < 0)  {
            break;
				}		
        month += 1;
        Days -= daysOfMonth[index];
		  }			

        index += 1;
		}
	}

	else  {
		while (true)  {
		  if (Days - daysOfMonth[index] < 0)  {
				break;
			}
			month ++;
			Days -= daysOfMonth[index];
			index ++;
		}
	}


	if (Days > 0) {
		month ++;
		date = Days;
	}
	else  {
		if (month == 2 && check == 1) {	
			date = 29;
		}
		else  {
			date = daysOfMonth[month - 1];
		}
	}

  hours = Time / 3600;
  minutes = (Time % 3600) / 60; 
  result += (date < 10) ? "0" : "";
  result += to_string(date);
  result += (month < 10) ? "/0":"/";
  result += to_string(month);
  result += "/";
  result += to_string(Year);
  result += (hours < 10) ? " 0":" ";
  result += to_string(hours);
  result += (minutes < 10) ? ":0":":";
  result += to_string(minutes);

	return result;
}
