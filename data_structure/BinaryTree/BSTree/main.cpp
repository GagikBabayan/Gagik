#include "BSTree.hpp"
#include <vector>

int main()
{   
    int numbers;
    cout << " |N| = ";
    cin >> numbers;
    int **matrix = new int *[numbers];
    cout << " matrix\n";

    vector<int> nodes;

    cout << " ";
    for (int i = 0; i < numbers; i++)
    {
        cout << " " << i;
    }
    cout << endl;
    for (int i = 0; i < numbers; i++)
    {
        matrix[i] = new int[numbers];
        cout << i << " ";
        for (int j = 0; j < numbers; j++)
        {
            cin >> matrix[i][j];
        }
    }

    Tree *root = new Tree();
    if (root->createTree(matrix, numbers, nodes))
    {
        cout << "Is binary tree\n";
        cout << "root: " << root->root->data << endl;
        for (int i = 0; i < nodes.size(); i++)
        {
            root->insert(nodes[i]);
        }
    }
    else
    {
        cout << "Is not binary tree\n";
    }

    cout << endl;
    bfs(root);
    cout << endl;

    /*
        Tree* root = new Tree(10);
        Add(5, root);
        Add(16, root);
        Add(14, root);
        Add(7, root);
        Add(3, root);

        bfs(root);

        cout << endl;
        cout << "Min = " << Min(root) << endl;
        cout << "Max = " << Max(root) << endl;
        cout << "Sum = " << Sum(root) << endl;
        //    cout << "Search num 12 = " << Search(12,root) << endl;

        root->DeleteNode(7);

        bfs(root);

        cout << endl;
        cout << "Min = " << Min(root) << endl;
        cout << "Max = " << Max(root) << endl;
        cout << "Sum = " << Sum(root) << endl;
        // cout << "Search num 12 = " << Search(12,root) << endl;
        */

    return 0;
}