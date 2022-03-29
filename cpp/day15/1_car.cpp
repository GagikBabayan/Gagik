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

  struct data info[7];
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

  cout << "Brand | Price | Mileage | Engine capacity | Gearbox | Color";
  cout << "\n\n" << "Input: ";
  
  string filter = "";
  getline(cin,filter);

  if(filter == "Brand") {
    string  Brand_data = "";
    cout << "Input Brand: ";
    getline(cin,Brand_data);
    for(int i = 0; i < 3; i++ ) {
      if(Brand_data == info[i].brand) {
        das(info[i]);
      }
    
    }

  }
  double arr[3];
  if(filter == "Price") {
    double Price_data;
    cout << "Input Price: ";
    cin  >> Price_data;
    for(int i = 0; i < 3; i++) {
      arr[i] = info[i].price;
    }

    Price_data = about_max(Price_data,arr);  
    
    for(int i = 0; i < 3; i++ ) {
      if(Price_data == info[i].price) {
        das(info[i]);
      }
    
    }

 
  }
  else if(filter == "Mileage") {
    double Mileage_data;
    cout << "Input Mileage: ";
    cin  >> Mileage_data;
    for(int i = 0; i < 3; i++) {
      arr[i] = info[i].mileage;
    }
    Mileage_data = about_max(Mileage_data,arr);  
    
    for(int i = 0; i < 3; i++ ) {
      if(Mileage_data == info[i].mileage) {
        das(info[i]);  
      }
    
    }

 
  }
  else if(filter == "Engine capacity") {
    double Engine_data;
    cout << "Input Mileage: ";
    cin  >> Engine_data;
    for(int i = 0; i < 3; i++) {
      arr[i] = info[i].engine_capacity;
    }
    Engine_data = about_max(Engine_data,arr);  
    
    for(int i = 0; i < 3; i++ ) {
      if(Engine_data == info[i].engine_capacity) {
        das(info[i]); 
      }
    
    }

 
  }
  if (filter == "Gearbox") {
    string  Gearbox_data = "";
    cout << "Input Gearbox: ";
    getline(cin,Gearbox_data);
    for(int i = 0; i < 3; i++ ) {
      if(Gearbox_data == info[i].gearbox) {
        das(info[i]);
      }
    
    }

  
  }
   if (filter == "Color") {
    string  Color_data = "";
    cout << "Input Color: ";
    getline(cin,Color_data);
    for(int i = 0; i < 3; i++ ) {
      if(Color_data == info[i].color) {
        das(info[i]);       
      }
    
    }

  
  }


  return 0;
}

double about_max(double Data,double arr[]) {
  double index = arr[0];
  double temp = abs(Data - arr[0]);
  for(int i = 1; i < 3; i++) {
    if(temp > abs(Data - arr[i])){
      temp = abs(Data -arr[i]);
      index = arr[i];
    }

  }
  return index;
}

void das(data c){

  cout << "=================================" << endl;
  cout << "Brand:-----------------> " << c.brand << endl;
  cout << "Model:-----------------> " << c.model << endl;
  cout << "Price:-----------------> " << c.price << " $" << endl;
  cout << "Mileage:---------------> " << c.mileage << " km" << endl;
  cout << "Engine capacity:-------> " << c.engine_capacity << " L" << endl;
  cout << "Gearbox:---------------> " << c.gearbox << endl;
  cout << "Color:-----------------> " << c.color << endl; 
  cout << "=================================" << endl;

}


