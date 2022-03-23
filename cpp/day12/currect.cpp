#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main () {

  string word;
  ifstream check;
  check.open("word.txt");
  ofstream  currect;
  currect.open("currected.txt");

  cout << "Input: "; 
  getline(cin,word);

  string date[10];
  int x = 0;

for (int i = 0; word[i] != '\0'; i++) {
      if (word[i] == ' ') {
             x++;
             continue;    
      }
      date[x] += word[i];

}


  string letter;
  int temp = 0;
  int k = 0;

for(int i = 0;i < 8;i++) {
    
    check >> letter;
    for(int j = 0;j < letter.length(); j++) {
        if(k == word.length()){
          break;
        }

        if(word[k] == ' '){
          k++;
          break;
        }
        if(word[k] == letter[j]){
          temp++;
          
        }

        k++; 

       
    }
    cout << endl;
   // cout << temp << "  " << date[i].length() << endl; 
    
   if( temp == date[i].length() - 1) {
    currect  << letter;  
    
   } 

  else {
    currect << " " << date[i];
  }
   temp = 0;
  

}



 currect.close();   
 check.close();


 


  return 0;
}
