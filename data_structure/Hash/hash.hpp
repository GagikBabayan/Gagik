#ifndef __HASHTABLE_H__
#define __HASHTABLE_H__

#include <iostream>
#include <list>
using namespace std;

template <class T>
class Hash
{
private:
  int BUCKET;
  list<T> *table;

public:
  Hash(int);
  Hash();
  int hashFunction(int);
  int hash_function(char* ,int);
  
  void insertItem(int);
  void displayHash();
  void deleteItem(int);
};

template <class T>
Hash<T>::Hash()
{
  BUCKET = 0;
}
template <class T>
Hash<T>::Hash(int b)
{
  this->BUCKET = b;
  table = new list<T>[BUCKET];
}

template <class T>
int Hash<T>::hash_function(char* str,int CAPACITY) {
    int i = 0;
    for (int j = 0; str[j]; j++)
        i += str[j];
    return i % CAPACITY;
}

template <class T>
int Hash<T>::hashFunction(int x)
{
  return (x % BUCKET);
}

template <class T>
void Hash<T>::insertItem(int key)
{
  int index = hashFunction(key);
  table[index].push_back(key);
}

template <class T>
void Hash<T>::deleteItem(int key)
{

  int index = hashFunction(key);

  list<int>::iterator i;
  for (i = table[index].begin(); i != table[index].end(); i++)
  {
    if (*i == key)
    break;
  }

  if (i != table[index].end())
    table[index].erase(i);
}

template <class T>
void Hash<T>::displayHash()
{
  for (int i = 0; i < BUCKET; i++)
  {
    cout << i;
    for (auto x : table[i])
      cout << " --> " << x;
    cout << endl;
  }
}

#endif