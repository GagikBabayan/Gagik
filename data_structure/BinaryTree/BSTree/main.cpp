#include "BSTree.hpp"

int main()
{

    Tree *root = new Tree(10);

    Add(5,root);
    Add(16,root);
    Add(14,root);
    Add(7,root);
    Add(3,root);

    Print(root);

    cout << endl;
    cout << "Min = " << Min(root) << endl;
    cout << "Max = " << Max(root) << endl;
    cout << "Sum = " << Sum(root) << endl;
//    cout << "Search num 12 = " << Search(12,root) << endl;

    root->DeleteNode(7);

    Print(root);

    cout << endl;
    cout << "Min = " << Min(root) << endl;
    cout << "Max = " << Max(root) << endl;
    cout << "Sum = " << Sum(root) << endl;
   // cout << "Search num 12 = " << Search(12,root) << endl;


    return 0;
}