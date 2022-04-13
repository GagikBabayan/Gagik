enum Gender { male, female };
enum Food {apple, sweet, meet, fish, egg};
enum Drink {water, milk, beer,alcohol};
class Human {
private:
    //Date _birthDay;
    int _eyeColor;
    int _hairColor;
    Gender _gender;
    Human _father;
    Human _mother;
    int _hungry;
    int _thirsty;
    int _healthLevel;
    int _mentalHealth;
    int Think(int hungry = 0);
    void Digestion();

public:
    void  Walk(int* hungry = 0,int*  thirsty = 0);
    int Breath(int hungry = 0);
    int smoke(int healthLevel);
    void Eat(Food _food,int hungry);
    void Drink(Drink _drink,int thirsty);
    Human(Date _birthDay, int _eyeColor, int _hairColor, Gender _gender, Human _father, Human _mother, int _hungry = 0,int  _thirsty = 0,int _healthLevel = 100,int _mentalHealth = 100);
    Human(Date _birthDay, int _eyeColor, int _hairColor, Gender _gender, Human _mother, int _hungry = 0,int  _thirsty = 0,int _healthLevel = 100,int _mentalHealth = 100);
    Human(Date _birthDay, int _eyeColor, int _hairColor, Gender _gender, Human _father, int _hungry = 0,int  _thirsty = 0,int _healthLevel = 100,int _mentalHealth = 100);
};
