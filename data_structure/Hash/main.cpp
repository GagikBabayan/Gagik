#include "hash.hpp"

int main()
{

    int a[] = {15, 11, 27, 8, 12};
    int n = sizeof(a) / sizeof(a[0]);

    string b[] = {"hello","world","Armenia"};
    int k = sizeof(b)/sizeof(b[0]);

  
    Hash<int> h(7);
    for (int i = 0; i < n; i++)
    {
      h.insertItem(a[i]);
    }
    h.displayHash();
    cout << "/////////////////////" << endl;
    h.deleteItem(12);
    h.displayHash();
  
    /*
    Hash<string> h(6);
    for(int i = 0; i < k; k++)
    {
      h.insertItem(b[i]);
    }
     h.displayHash();
    cout << "/////////////////////" << endl;
    h.deleteItem(b[0]);
    h.displayHash();
    */
  return 0;
}