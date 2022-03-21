
#include <iostream>
#include <string.h>
using namespace std;
 
 

void permute(string word, int l, int len)
{
                      
    if (l == len) {                       // Base case
        cout << word <<endl;
    }

    else {
      
        for (int i = l; i <= len; i++) {  // Permutations 
 
            
            swap(word[l], word[i]);       //Swapping
 
            
            permute(word, l+1, len);      //Recursia
 
            
            swap(word[l], word[i]);       //backtrack
        }
    }
}


int main() {
    string word;
    cout << "Input word: ";
    cin  >> word;

    int n = word.size();

    permute(word, 0, n-1);

    cout << endl;

    return 0;
}
