#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <string>
using namespace std;


template <typename T>
  class Node {
   public:
    Node *pNext;
    T data;
    string key;

    Node(T data, string key = "", Node *pNext = nullptr) {
      this->data = data;
      this->key = key;
      this->pNext = pNext;
    }
  };

template <typename T>
class List {
private:
  
  Node<T> *head;
  int _size;

public:
  List();
  ~List();
  
  void Add(T, string);
  void removeAll();
  void Remove_front();
  void RemoveAt(int);
  void Remove_back();
  void _print();

  int getSize() { return _size; }

  string getElement(int);
  T getDate(int);
};

template <typename T>
List<T>::List() {
  head = nullptr;
  _size = 0;
}

template <typename T>
List<T>::~List() {
  removeAll();
}

template <class T>
void List<T>::Add(T data,string key)                                             // Add Nodes implementation
{
    if (head == nullptr)
    {
        head = new Node<T>(data,key);
    }
    else
    {
        Node<T>* current = this->head;
        while (current->pNext != nullptr)
        {
 
            current = current->pNext;
        }
        current->pNext = new Node<T>(data,key);
    }
 
    _size++;
}



template <typename T>
void List<T>::removeAll() {
  while (_size) {
    Remove_front();   
  }
}


template <class T>
void List<T>::Remove_front()                                          //  Remove front Nodes implementation
{
 
   class  Node<T> *temp = head;
 
    head = head->pNext;
 
    delete temp;
 
    _size--;
}

template <class T>                                                 // Remove Nodes from everything place  implementation
void List<T>::RemoveAt(int index)
{
 
    if (index == 0)
    {
        Remove_front();
    }
    else 
    {
        Node<T>* previous = this->head;
        for (int i = 0; i < index - 1; i++)
        {
            previous = previous->pNext;
        }
 
        Node<T>* toDelete = previous->pNext;
        previous->pNext = toDelete->pNext;
 
        delete toDelete;
        _size--;
    }
}
template <class T>                                                 // Remove last Node implementation
void List<T>::Remove_back()
{
    RemoveAt(_size - 1);
 
}

template <typename T>
string List<T>::getElement(int index) {
  Node<T> *curr = head;
  for (int i = 0; i < index; i++) {
    curr = curr->pNext;
  }
  return curr->key;
}

template <typename T>
T List<T>::getDate(int index) {
  Node<T> *curr = head;
  for (int i = 0; i < index; i++) {
    curr = curr->pNext;
  }
  return curr->data;
}

template <typename T>
void List<T>::_print() {
  Node<T> *head1 = head;
  while (head1) {
    cout << head1->key << " -> " << head1->data << ", ";
    cout << endl;
    head1 = head1->pNext;
  }
}

#endif