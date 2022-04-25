#ifndef __STACK_H__
#define __STACK_H__

#include "../LinkedList/linkedlist.h"

template<typename T>
class Stack 
{
private:
    List<T> _list;

public:
    T pop();
    T peek();
    bool isEmpty();
    void push(T);
    Stack();
    ~Stack();
};

template<typename T>
T Stack<T>::pop()
{ 
    T return_value = peek();
    _list.Remove_back();
    return return_value;
}

template<typename T>
T Stack<T>::peek()
{
   return _list[_list.GetSize() - 1];
}

template<typename T>
bool Stack<T>::isEmpty()
{
    return _list.GetSize() == 0;
}

template<typename T>
void Stack<T>::push(T value)
{
    _list.Add(value);
}

template<typename T>
Stack<T>::Stack() = default;

template<typename T>
Stack<T>::~Stack()
{
    _list.Clear();
}


#endif // __STACK_H__