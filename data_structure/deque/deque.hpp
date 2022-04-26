#ifndef __DEQUE_H__
#define __DEQUE_H__


#include "../LinkedList/linkedlist.h"

template<typename T>
class DeQueue{
private:
    List<T> _list;

public:
    T popFront();
    void popBack();
    bool isEmpty();
    void pushFront(T);
    void pushBack(T);
    T peekFront();
    T peekBack();
    DeQueue();
    ~DeQueue();
};

template<typename T>
T DeQueue<T>::popFront()
{ 
    T return_value = _list.getElement(0);
    _list.Remove_front();
    return return_value;
}

template<typename T>
void DeQueue<T>::popBack()
{
    T return_value = _list.getElement(_list.GetSize() - 1);
    _list.Remove_back(); 
    return return_value;
}

template<typename T>
bool DeQueue<T>::isEmpty()
{
    return _list.GetSize() == 0;
}

template<typename T>
void DeQueue<T>::pushFront(T value)
{
    _list.Add_front(value);
}

template<typename T>
void DeQueue<T>::pushBack(T value)
{
    _list.Add(value);
}

template<typename T>
T DeQueue<T>::peekFront()
{
    return _list.getElement(0);
}

template<typename T>
T DeQueue<T>::peekBack()
{
    return _list[_list.GetSize() - 1];
}

template<typename T>
DeQueue<T>::DeQueue() = default;

template<typename T>
DeQueue<T>::~DeQueue()
{
    _list.Clear();
}

#endif