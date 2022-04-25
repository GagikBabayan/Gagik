#include <iostream>
#include "linkedlist.h"
#include "linkedlist.cpp"
#include "stack.hpp"
#include "que.hpp"
using namespace std;

 
int main() 
{
    
   List<int> t;
   Stack<int> stack;
   stack.push(2);
   stack.push(3);
   cout << stack.peek() << endl;
   Queue<int> q;
   q.pushBack(5);
   q.pushBack(10);

    cout << q.peek() << endl ;
   
    

    return 0;
}
