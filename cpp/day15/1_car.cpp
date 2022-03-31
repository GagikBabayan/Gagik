#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

double about_max(double  Data, double arr[]);
struct data {

  string  brand;
  string  model;
  double  price;
  double  mileage;
  double  engine_capacity;
  string  gearbox;
  string  color;



};
void das(data  c);

int main () {
  struct data info[11];
  ifstream file;
  file.open("car_data.txt");
  string str = "", info_string[7];
  int i = 0, j = 0;
  while(!file.eof()){
    file >> str;
    info_string[i] = str;
    if( i == 6) {
      info[j].brand = info_string[0].substr(0, info_string[0].size()-1);
      info[j].model = info_string[1].substr(0, info_string[1].size()-1) ;
      info[j].price = stod(info_string[2].substr(0, info_string[2].size()-1));
      info[j].mileage = stod(info_string[3].substr(0, info_string[3].size()-1));
      info[j].engine_capacity = stod(info_string[4].substr(0, info_string[4].size()-1));
      info[j].gearbox = info_string[5].substr(0, info_string[5].size()-1);
      info[j].color = info_string[6];


      j++;
      i = -1;
    }
    i++;
  }
  

  cout << "=================================================";
  cout << "\n\t\tCar  Search Programm\n";
  cout << "=================================================";

  cout << "\n\n";

  cout << "\t\tSearch Car Filter\n";
  cout << "\t\t=================\n";

  cout << "0 - Search | 1 - brand | 2 - model | 3 -  price | 4 - mileage | 5 -  engine capacity | 6 - gearbox | 7 - color";
  cout << "\n\n";
    bool check = true;
    bool temp[] = {false,false,false,false,false,false,false};
    string b1;
    string mod;
    double p2_1;
    double p2_2;
    double m3_1;
    double m3_2;
    double e4;
    string g5;
    string c6;

  while(check) {
    cout << "Prameters Input: ";
    int i;
    cin >> i;
    switch (i) {
        case 0:
            check = false;
            break;
        case 1:
            cout << "Input Brand: ";
            cin  >> b1;
            temp[0] = true;
            break;
        case 2:
            cout << "Input Model: ";
            cin  >> mod;
            temp[1] =true;
            break;
        case 3:
            cout << "Input Price Min: ";
            cin >> p2_1;
            cout << "Input Price Max: ";
            cin  >> p2_2;
            temp[2] = true;
            break;
        case 4:
            cout << "Input Mileage Min: ";
            cin  >> m3_1;
            cout << "Input Mileage Max: ";
            cin  >> m3_2;
            temp[3] = true;
            break;
        case 5:
            cout << "Input Engine capacity: ";
            cin >> e4;
            temp[4] = true;
            break;
        case 6:
           cout << "Input Gearbox: ";
            cin  >> g5;
            temp[5] = true;
            break;
        case 7:
            cout << "Input Color";
            cin >> c6;
            temp[6] = true;
            break;
        }

}
        for (int k = 0; k < 11; k++) {

        if( temp[0] && b1 != info[k].brand ) {

           continue;
        }

        if(temp[1] && mod != info[k].model) {
            continue;
        }

        if(temp[2] && (info[k].price <  p2_1 || info[k].price > p2_2)) {

                continue;
        }

        if(temp[3] && (info[k].mileage <  m3_1 || info[k].mileage > m3_2)){
                continue;
        }

        if(temp[4] && info[k].engine_capacity != e4){

                continue;
        }

        if(temp[5] && info[k].gearbox != g5) {

                continue;
        }

        if(temp[6] && info[k].color != c6) {

                continue;
        }
  
  cout << "=================================" << endl;
  cout << "Brand:-----------------> " << info[k].brand << endl;
  cout << "Model:-----------------> " << info[k].model << endl;
  cout << "Price:-----------------> " << info[k].price << " $" << endl;
  cout << "Mileage:---------------> " << info[k].mileage << " km" << endl;
  cout << "Engine capacity:-------> " << info[k].engine_capacity << " L" << endl;
  cout << "Gearbox:---------------> " << info[k].gearbox << endl;
  cout << "Color:-----------------> " << info[k].color << endl; 
  cout << "=================================" << endl;


   }

    

  

}







