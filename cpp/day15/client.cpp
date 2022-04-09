#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

int hotelNum(int  temp); 
struct data {

  string  country;
  string  city;
  string  name;
  int     star;
  int     room;
  int     price;

};

int main () {
  
  ifstream file;
  file.open("hotels.txt");
  int  d = 0;
  d = hotelNum(d);
  struct data info[d];
  string str = "", info_string[5];
  int i = 0, j = 0;
  while(!file.eof()){
    file >> str;
    info_string[i] = str;
    if( i == 5) {
      info[j].country = info_string[0].substr(0, info_string[0].size()-1);
      info[j].city = info_string[1].substr(0, info_string[1].size()-1);
      info[j].name = info_string[2].substr(0, info_string[2].size()-1);
      info[j].star = stoi(info_string[3].substr(0, info_string[3].size()-1));
      info[j].room = stoi(info_string[4].substr(0, info_string[4].size()-1));
      info[j].price = stoi(info_string[5].substr(0, info_string[5].size()-1));

      j++;
      i = -1;
    }
    i++;
  }
  

  cout << "=================================================";
  cout << "\n\t\tHotel  Search Programm\n";
  cout << "=================================================";

  cout << "\n\n";

  cout << "\t\tSearch Hotel Filter\n";
  cout << "\t\t=================\n";

  cout << "0 - Search | 1 - country | 2 - city | 3 - name | 4 - star | 5 -  room | 6 - price ";
  cout << "\n\n";
    bool check = true;
    bool temp[] = {false,false,false,false,false,false};
    string  cou;
    string cit;
    string nam;
    int   sta;
    int   ro;
    int   pri;
    int   minpr;
    int   maxpr;

  while(check) {
    cout << "Prameters Input: ";
    int i;
    cin >> i;
    switch (i) {
        case 0:
            check = false;
            break;
        case 1:
            cout << "Input Country: ";
            cin  >> cou;
            temp[0] = true;
            break;
        case 2:
            cout << "Input City: ";
            cin  >> cit;
            temp[1] =true;
            break;
        case 3:
            cout << "Input Name: ";
            cin >> nam;
            temp[2] = true;
            break;
        case 4:
            cout << "Input Star: ";
            cin  >> sta;
            temp[3] = true;
            break;
        case 5:
            cout << "Input room: ";
            cin >> ro;
            temp[4] = true;
            break;
        case 6:
            cout << "Input MinPrice: ";
            cin  >> minpr;
            cout << "Input MaxPrice: ";
            cin  >> maxpr;
            temp[5] = true;
            break;
    }

    for (int k = 0; k < d; k++) {

      if( temp[0] && cou != info[k].country ) {
        continue;
      }

      if(temp[1] && cit != info[k].city) {
        continue;
      }

      if(temp[2] && (info[k].name  !=  nam)) {
        continue;
      }

      if(temp[3] && info[k].star != sta){
        continue;
      }

      if(temp[4] && info[k].room != ro) {
        continue;
      }
       
      if(temp[5] && (info[k].price <  minpr || info[k].price > maxpr)){
        continue;
      }
  
  cout << "=================================" << endl;
  cout << "Country:-----------------> " << info[k].country << endl;
  cout << "City:-----------------> " << info[k].city << endl;
  cout << "Name:-----------------> " << info[k].name << endl;
  cout << "Star:---------------> " << info[k].star << endl;
  cout << "Room:-------> " << info[k].room << endl;
  cout << "Price:---------------> " << info[k].price << endl;
  cout << "=================================" << endl;


   }

    
  }
  

}

int hotelNum(int temp = 0) {  
  ifstream f;
  f.open("hotels.txt");
  string str = "", info_string[5];
  while(!f.eof()){
    temp++;
  
  }


  return temp;
}

