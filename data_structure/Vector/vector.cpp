#include "vector.h"
#include <iostream>
using namespace std;

template<typename T>
MyVector<T>::MyVector()
{
    arr = new T[1];
    capacity = 1;
    size = 0;

        
}
template<typename T>
MyVector<T>::~MyVector()
{
    delete [] arr;
    size = 0;
    capacity = 0;

}

template<typename T>
void MyVector<T>::Add(T data)
{
    if (size == capacity) 
    {
        T* temp = new T[2 * capacity];
        for (int i = 0; i < capacity; i++) {
            temp[i] = arr[i];
        }
        delete[] arr;
        capacity *= 2;
        arr = temp;
    }       
    arr[size] = data;
    size++;
}

template<typename T>
void MyVector<T>::AddAt(T data, int index)
{
 
    if (index == capacity)
    {
        Add(data);
    }
    else if(index < size)
    {
        arr[index] = data;
    }
    else {
        arr[index] = data;
        size++;
    }
            
 }

template<typename T>
void MyVector<T>::AddFront(T data)
{
    if(capacity == size)
    {
        T* temp = new T[2 * capacity];
        for (int i = 0; i < capacity; i++) {
            temp[i] = arr[i];
        }
        delete[] arr;
        capacity *= 2;
        arr = temp;
    }
    
    for(int i = 0; i < size; i++)
    {
        arr[size - i] = arr[size - i - 1];
    }
    arr[0] = data;
    size++;   
}

template<typename T>
int MyVector<T>::GetCapacity() const
{
    return capacity;
    
}

template<typename T>
int MyVector<T>::GetSize() const
{
    return size;
    
}

template<typename T>
void MyVector<T>::RemoveAt(int index)
{
    for(int i = index; i < size; i++)
    {
        arr[i] = arr[i+1];

    }
    size--;
}

template<typename T>
void MyVector<T>::RemoveAll()
{
   ~MyVector();
}

template<typename T>
T& MyVector<T>::operator[](const int index) const
{
    return arr[index];
}

template<class Type>
ostream& operator << (ostream &out, const MyVector<Type>& array) 
{
    for (int i = 0; i < array.GetSize(); i++)
    {
            out << array[i] << " ";
    }

    return out;
}

template<typename T>
void MyVector<T>::Print()
    {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } 

