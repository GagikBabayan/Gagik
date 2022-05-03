#include "BSTree.hpp"

int main()
{

    Tree *root = new Tree(10);

    for (int i = 0; i < 13; i+=1)
    {
        Add(i, root);
    }

   
    Print(root);

    cout << endl;
    cout << "Min = " << Min(root) << endl;
    cout << "Max = " << Max(root) << endl;
    cout << "Sum = " << Sum(root) << endl;
    cout << "Search num 12 = " << Search(12,root) << endl;

    return 0;
}