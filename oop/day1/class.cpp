#include <iostream>

using namespace std;

void function() {};
enum class Address {
    Ashot_Grashi,
    Tumanyan_5,
    Baxramyan_73,
};
enum class  Gender {
     boy,
     girl,
};
class Human {
protected:
    int _height;
    int _width;
    Gender gender;
    void Walk();
    void Drink();
    void Eat();
 
};
 
class HomoSapience :protected Human {
protected:
    
    string _name;
    string _surname;
    int _birth_data;
    Address address;
    void  Write();
    void  Read();
};
 
class Programmer : protected HomoSapience {
protected:
    int _sleep;
    bool _married;
    bool _smoking;
    bool _drink_many_coffe;
    void  Write_program ();
    
};


