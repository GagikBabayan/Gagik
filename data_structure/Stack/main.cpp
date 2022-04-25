#include "stack.hpp"
#include "../LinkedList/linkedlist.cpp"
#include <iostream>

using namespace std;

int main()
{
    Stack<int> stack;
    stack.push(5);
    stack.push(2);
    
    cout << stack.peek() << endl;

    return 0;
}