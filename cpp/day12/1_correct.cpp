#include <iostream>
#include <fstream>

using namespace std;

string correct(string word) {
  ifstream fonc;
  fonc.open("word.txt");
  string word_now;
  int count = 0;
  while(!fonc.eof()) {
    count = 0;
    getline(fonc, word_now);

    if(word_now.size() != word.size()){
      continue;
    }
    for(int i = 0; word[i] != '\0'; i++) {
      if(word[i] != word_now[i] && word[i] + 32 != word_now[i]){
        count ++;
      }
    }
    if(count == 1) {
      break;
    }
  }
  fonc.close();
  if(count != 1) {
    return word;
  }
  return word_now;
}

int main() {
  string line;
  cout << "Input: ";
  getline(cin, line);
  line += " ";
  string word;
  int i = 0;
  ofstream text;
  text.open("corrected.txt");
  while(line[i] != '\0') {
    word = "";
    for(;line[i] != ' '; i++){
      word += line[i];
    }
    i++;
    text << correct(word) << " ";
    
  }
  text.close();
  return 0;
}
                                                                                                                                  

