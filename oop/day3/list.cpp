#include <iostream>
using namespace std;
 
template <typename T>
class List 
{
public:
    List();
    ~List();
    void Add(T data);                                                 // Add Nodes
    void Add_front(T data);                                           // Add Nodes from the beginning
    void AddAt(T data, int index);                                    // Add Nodes from everything place
    int GetSize() { return Size; }                                    // Size of Nodes
    T& operator[](const int index);                                   // Overloading [] operator
    friend std::ostream& operator << (std::ostream, const List<T>);   // friend function Overloading << operator
    void Remove_front();                                              //  Remove front Nodes
    void RemoveAt(int index);                                         //  Remove 
    void Remove_back();
    void Clear();
    
private:
 
    template <typename T>
    class Node                                                        // Nodes Class
    {
    public:
        Node* pNext;
        T data;
 
        Node(T data = T(), Node* pNext = nullptr)
        {
            this->data = data;
            this->pNext = pNext;
        }
    };
    int Size;
    Node<T>* head;
};
 
template <typename T>                                                 //  List Constructor
List<T>::List()
{
    Size = 0;
    head = nullptr;
}
 
template <typename T>                                                 //  List  Destructor
List<T>::~List()
{
    Clear();
 
}
template <typename T>
void List<T>::Remove_front()                                          //  Remove front Nodes implementation
{
 
    Node<T> *temp = head;
 
    head = head->pNext;
 
    delete temp;
 
    Size--;
}
 
template <typename T>
void List<T>::Clear()                                                 // Clear all Nodes
{
    while (Size) 
    {
 
        Remove_front();
    }
 
}
 
template <typename T>
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
template <typename T>
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
 
template <typename T>                                                // Add Nodes from the beginning implementation
void List<T>::Add_front(T data)
{
    head = new Node<T>(data,head);
    Size++;
}
 
template <typename T>                                                // Add Nodes from everything place   implementation
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
 
template <typename T>                                                 // Remove Nodes from everything place  implementation
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
template <typename T>                                                 // Remove last Node implementation
void List<T>::Remove_back()
{
    RemoveAt(Size - 1);
 
}
 
template <typename T>
std::ostream& operator << (std::ostream& out, const List<T>& list)    //  friend function Overloading << operator  implementation
{
    for (int i = 0; i < list.GetSize(); i++)
    {
        out << list[i] << endl;
    }
    return out;
}
 
int main() 
{
    List<int> lst;
    

    return 0;
}
