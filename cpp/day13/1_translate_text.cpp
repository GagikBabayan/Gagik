#include <iostream>
#include <fstream>

using namespace std;

string translate(string);


int main () {


  cout << " If transleted hy-en, Input  1: ";
  int lang;
  cin >> lang;


  ofstream engl;
  engl.open("translate.txt");

  string line;
  cout << " Input line: " ;
  getline(cin,line);
  getline(cin, line);
  line += " ";
  string word;
  string das = "" ;
  int i = 0;
  while(line[i] != '\0') {
    word = "";
    for(;line[i] != ' '; i++){
      word += line[i];
    }
    i++;

    das += translate(word);
    das += " ";
  }
  engl <<  das ;
  engl.close();

  return 0;
}

string translate(string word) {
  ifstream arm;
  arm.open("hy-en.txt");
  string word_tr;
  string text = "";
  while(!arm.eof()) {
    int  count = 0;
    getline(arm, word_tr);

    for(int i = 0; word_tr[i] != '-'; i++) {
      if(word[i] == word_tr[i]){
        count ++;
      }
      else {
        break;
      }
    }

    if(count  == word.length()){
      count += 3;
      for(; word_tr[count] != '\0'; count++){
        text += word_tr[count];

      }
    }

  }

  arm.close();


  return text;
}
