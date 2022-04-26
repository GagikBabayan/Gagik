#include "que.hpp"
#include "../LinkedList/linkedlist.cpp"
#include <iostream>

using namespace std;

int main()
{
    Queue<int> que;
    que.pushBack(5);
    que.pushBack(3);
    que.popFront();
    cout << que.peek() << endl;
    cout << que.isEmpty() << endl;
    return 0;
}