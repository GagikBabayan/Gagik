#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>

#include "linkedlist.h"
using namespace std;

class HashTable {
 private:
  List<int> *_arr;
  int _count;
  int _sizeArr;

  int hash(string key) {
    unsigned int a = 0;

    for (int i = 0; key[i] != '\0'; i++) {
      a += key[i];
    }

    return a % _sizeArr;
    ;
  }

 public:
  HashTable() {
    _count = 0;
    _sizeArr = 5;
    _arr = new List<int>[_sizeArr];
  }

  bool isExist(string key) {
    int a = hash(key);
    for (int i = 0; i < _arr[a].getSize(); i++) {
      if (_arr[a].getElement(i) == key) {
        return true;
      }
    }
    return false;
  }

  void insert(string key, int date) {
    if (_count >  _sizeArr * 0.75)  // check to zoom or not
    {
      resize_X2();
    }

    if (!isExist(key)) {
      int a = hash(key);
      _arr[a].Add(date, key);
      _count++;
    } else {
      cout << key << " <<--- It already exists " << endl;
    }
  }

  void remove(string key) {
    if (_count < _sizeArr * 0.25)  // check to reduce or not
    {
      rehash_B2();
    }

    int a = hash(key);
    int temp;
    for (int i = 0; i < _arr[a].getSize(); i++) {
      if (_arr[a].getElement(i) == key) {
        temp = i;
        break;
      }
    }
    _arr[a].RemoveAt(temp);
    _count--;
  }

  void print() {
    for (int i = 0; i < _sizeArr; i++) {
      _arr[i]._print();
    }
  }

  int countElement() { return _count; }

  int find(string key) {
    int a = hash(key);
    for (int i = 0; i < _arr[a].getSize(); i++) {
      if (_arr[a].getElement(i) == key) {
        return _arr[a].getDate(i);
      }
    }
    return 0;
  }

  void resize_X2()  // Zoom by 2 time
  {
    _sizeArr = _sizeArr * 2;

    List<int> *arr1 = new List<int>[_sizeArr];
    for (int i = 0; i < (_sizeArr / 2); i++) {
      if (_arr[i].getSize() != 0) {
        int a = hash(_arr[i].getElement(0));
        arr1[a] = _arr[i];
      }
    }

    _arr = arr1;
  }

  void rehash_B2()  // Reduce by 2 time
  {
    _sizeArr = _sizeArr / 2;

    List<int> *arr1 = new List<int>[_sizeArr];
    int j = 0;
    for (int i = 0; i < (_sizeArr * 2); i++) {
      if (_arr[i].getSize() != 0) {
        int a = hash(_arr[i].getElement(0));
        arr1[a] = _arr[i];
        j++;
      }
    }

    _arr = arr1;
  }
};

#endif
