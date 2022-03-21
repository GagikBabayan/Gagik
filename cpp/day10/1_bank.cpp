#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;

double proc (double sum, double procent);

int main (int argc, char* argv[]) {


        time_t now = time(0);
        char* date_time = ctime(&now);
        string date[5];
        int x = 0;
        for (int i = 0; date_time[i] != '\0'; i++) {
                if (date_time[i] == ' ') {
                        x++;
                        continue;    
                }
                date[x] += date_time[i];
        }
    
        int day = stoi(date[2]);
        int year = stoi(date[4]);
        int m;
        string mon[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        for (int i = 0; i < 12; i++) {
                if (mon[i] == date[1]) {
                        m = i;
                }
        }
        double sum = atof(argv[1]);
        double procent = atof(argv[2]);
        double month;
        m = m + 2;
        cout << "Skzbnakan gumar: " << sum << " amd " <<  endl;
     
        for(int i = 0; i < atoi(argv[3]); i++) {
                month = proc (sum, procent);
                sum += month;
                cout << m  << "/" << day << "/" << year << "| "  << sum << "amd = " << month << endl;
                
                if (m >= 12) {
                        year++;
                        m = 0;
                }
                
                m++;
        }
    
        return 0;

}

double proc (double sum, double procent) {

        return sum * ((procent / 100) / 12);
}

