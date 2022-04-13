#include "human.h"
#include <iostream>
using namespace std;

Human::Think(int hungry = 0)
{
    hungry += 0.2;

    return hungry;
}
Human::Walk(int* hungry,int* thirsty = 0 )
{
    *hungry += 0.4;
    *thirsty += 0.3;
}
Human::Breath(int hungry = 0)
{
    hungry += 0.1;
}
Human::Eat(Food _food, int hungry = 0)
{
    cout << "I eat " << _food;
    if(hungry != 0) {
      hungry -= 2;
      if( hungry < 0) {
        hungry = 0;
      }
    }
    return hungry;
}
Human::Drink(Drink drink, int thirsty = 0)
{
    cout << "I drink " << drink;

    switch(drink) {
      case water:
      case milk:
            if(_healthLevel < 100 ) {
              _healthLevel++;   
            }
            if(_mentalLevel < 100) {
              _mentalLevel++;
            }
           break;
      case beer:
      case alcohol:
           _healthLevel--;
           _mentalLevel--;

      default:
            _mental_health_level--;
            _physical_health_level--;
         
    }
    if(thirsty != 0) {
      thirsty -= 2;
      if( thirsty < 0) {
        thirsty = 0;
      }
    }
    return thirsty;
}
Human::Digestion()
{
    cout << "Digestion";
}
 Human(Date _birthDay, int _eyeColor, int _hairColor, Gender _gender, Human _father, Human _mother, int _hungry = 0,int  _thirsty = 0,int _healthLevel = 100,int _mentalHealth = 100);
{
    _birthDay = _birthDay;
    _eyeColor = _eyeColor;
    _hairColor = _hairColor;
    _gender = _gender;
    _father = _father;
    _mother = _mother;
    _hungry = _hungry;
    _thirsty = _thirsty;
    _healthLevel = _healthLevel;
    _mentalHealth = _mentalHealth;

}

 Human(Date _birthDay, int _eyeColor, int _hairColor, Gender _gender, Human _father, int _hungry = 0,int  _thirsty = 0,int _healthLevel = 100,int _mentalHealth = 100);
{
    _birthDay = _birthDay;
    _eyeColor = _eyeColor;
    _hairColor = _hairColor;
    _gender = _gender;
    _father = _father;
    _hungry = _hungry;
    _thirsty = _thirsty;
    _healthLevel = _healthLevel;
    _mentalHealth = _mentalHealth;

}

 Human(Date _birthDay, int _eyeColor, int _hairColor, Gender _gender, Human _mother, int _hungry = 0,int  _thirsty = 0,int _healthLevel = 100,int _mentalHealth = 100);
{
    _birthDay = _birthDay;
    _eyeColor = _eyeColor;
    _hairColor = _hairColor;
    _gender = _gender;
    _mother = _mother;
    _hungry = _hungry;
    _thirsty = _thirsty;
    _healthLevel = _healthLevel;
    _mentalHealth = _mentalHealth;

}
