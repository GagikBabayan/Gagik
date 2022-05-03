#include <iostream>
#include <stack>
using namespace std;
 
#include "BSTree.hpp"
 
int main() {
    
    Tree* root = new Tree(13);
 
    Add(15, root);
    Add(16, root);
    Add(14, root);
 
    Print(root);
    cout << endl;
    Stack(root);
    cout << endl;

    cout << "Search num 13 = " << Search(root,13) << endl;
 
    
 
    return 0;
}