#ifndef __VECTOR_H__
#define __VECTOR_H__

#include <ostream>
using std::ostream;

template<typename T>
class MyVector 
{
    private:
        T* arr;
        int capacity;
        int size;
    public:
        MyVector();
        ~MyVector();
        void Add(T data);
        void AddAt(T data, int index);
        void AddFront(T data);
        void Print();
        int GetSize() const;
        int GetCapacity() const;
        void RemoveAt(int index);
        void RemoveAll();
        T& operator[](const int index) const;
        template <class Type>
        friend ostream& operator << (ostream &out, const MyVector<Type>&);
       
};


#endif 