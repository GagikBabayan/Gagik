#include "deque.hpp"
#include "../LinkedList/linkedlist.cpp"
#include <iostream>

using namespace std;

int main()
{
    DeQueue<int> deque;
    deque.pushBack(5);
    cout << deque.peekBack() << endl;

   return 0;
}