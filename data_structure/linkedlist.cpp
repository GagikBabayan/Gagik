#include "linkedlist.h"
#include <iostream>
using namespace std;

template <class T>                                                 //  List Constructor
List<T>::List()
{
    Size = 0;
    head = nullptr;
}
 
template <class T>                                                 //  List  Destructor
List<T>::~List()
{
    Clear();
 
}
template <class T>
void List<T>::Remove_front()                                          //  Remove front Nodes implementation
{
 
   class  Node<T> *temp = head;
 
    head = head->pNext;
 
    delete temp;
 
    Size--;
}
 
template <class T>
void List<T>::Clear()                                                 // Clear all Nodes
{
    while (Size) 
    {
 
        Remove_front();
    }
 
}
 
template <class T>
void List<T>::Add(T data)                                             // Add Nodes implementation
{
    if (head == nullptr)
    {
        head = new Node<T>(data);
    }
    else
    {
        Node<T>* current = this->head;
        while (current->pNext != nullptr)
        {
 
            current = current->pNext;
        }
        current->pNext = new Node<T>(data);
    }
 
    Size++;
}
template <class T>
T& List<T>::operator[](const int index)                               //  Overloading [] operator implementation
{
    int counter = 0;
    Node<T>* current = this->head;
    while (current != nullptr) 
    {
 
        if (counter == index)
        {
            return current->data;
        }
        current = current->pNext;
        counter++;
    }
}
 
template <class T>                                                // Add Nodes from the beginning implementation
void List<T>::Add_front(T data)
{
    head = new Node<T>(data,head);
    Size++;
}
 
template <class T>                                                // Add Nodes from everything place   implementation
void List<T>::AddAt(T data, int index) 
{
    if (index == 0) 
    {
        Add_front(data);
    }
    else {
        Node<T>* previous = this->head;
        for (int i = 0; i < index - 1; i++)
        {
            previous = previous->pNext;
        }
 
        Node<T>* newNode = new Node<T>(data, previous->pNext);
        previous->pNext = newNode;
        Size++;
    }
    
}
 
template <class T>                                                 // Remove Nodes from everything place  implementation
void List<T>::RemoveAt(int index)
{
 
    if (index == 0)
    {
        Remove_front();
    }
    else {
        Node<T>* previous = this->head;
        for (int i = 0; i < index - 1; i++)
        {
            previous = previous->pNext;
        }
 
        Node<T>* toDelete = previous->pNext;
        previous->pNext = toDelete->pNext;
 
        delete toDelete;
        Size--;
    }
}
template <class T>                                                 // Remove last Node implementation
void List<T>::Remove_back()
{
    RemoveAt(Size - 1);
 
}

template <class T>
ostream& operator <<(ostream &out,const List<T> &n)
{
    Node<T> *temp;
    temp = n.head;
    while(temp != nullptr)
    {
        out << temp->data << " ";
        temp = temp->pNext;
    }
    out << endl;
    return out;
}
