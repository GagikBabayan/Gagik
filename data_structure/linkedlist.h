#ifndef LINKEDLIST_H
#define LINKEDLIST_H


template <class T>
    class Node                                                        // Nodes Class
    {
    public:
        Node* pNext;
        T data;
 
        Node(T data, Node* pNext = nullptr)
        {
            this->data = data;
            this->pNext = pNext;
        }
    };
template <class T>
class List{
public:
    List();
    ~List();
    void Add(T data);                                                 // Add Nodes
    void Add_front(T data);                                           // Add Nodes from the beginning
    void AddAt(T data, int index);                                    // Add Nodes from everything place
    int GetSize() { return Size; }                                    // Size of Nodes
    T& operator[](const int index);                                   // Overloading [] operator
    void Remove_front();                                              //  Remove front Nodes
    void RemoveAt(int index);                                         //  Remove 
    void Remove_back();
    void Clear();
    template <class Type>
    friend ostream& operator <<(ostream &out,const List<Type> &);
private:
    int Size;
    Node<T>* head;
};





#endif
