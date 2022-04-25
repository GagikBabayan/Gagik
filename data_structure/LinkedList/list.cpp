#include <iostream>
#include "linkedlist.h"
#include "linkedlist.cpp"
using namespace std;

 
int main() 
{
    
    List<int> list;
    int num;

    cout << "Input List Elements  size : ";
    cin >> num;

    for(int i = 0;i < num;i++){
        list.Add(i);
    }

    cout << list;
    

    return 0;
}
