#ifndef _BSTREE_H_
#define _BSTREE_H_

#include <iostream>

using namespace std;

class Tree {
public:
    int _data;
    class Tree* left;
    class Tree* right;
    
    Tree(int data) {
        _data = data;
        left = nullptr;
        right = nullptr;
    }
    Tree() { 
        _data = 0;
        left = nullptr;
        right = nullptr;
        return;
    }
    
    
    
};
 
Tree* Add(int data, Tree*& tree) {
    if (!tree) {
        tree = new Tree;
        tree->_data = data;
        tree->left = 0;
        tree->right = 0;
        return tree;
    }
    else {
        if (tree->_data > data) {
            Add(data, tree->left);
        }
        else {
            Add(data, tree->right);
        }
    }
    return tree;
}
 
void Print(Tree* temp) {
    if (temp == nullptr) {
        return;
    }
    Print(temp->left);
    cout << temp->_data << " ";
    Print(temp->right);
}
 
bool is_Empty(Tree* tree) {
    return tree == nullptr;
}
 
void Stack(Tree* root) {
    int min = root->_data;
    int sum = 0;
 
    if (root == nullptr) {
        return;
    }
 
    stack<Tree*> temp;
    temp.push(root);
 
    while (!temp.empty()) {
        Tree* tree = temp.top();
        if (min >= tree->_data) {
            min = tree->_data;
        }
        sum += tree->_data;
        temp.pop();
 
        if (tree->left != nullptr) {
            temp.push(tree->left);
        }
        if (tree->right != nullptr) {
            temp.push(tree->right);
        }
    }
    cout << endl;
    cout << "Min = " << min << endl;
    cout << "Sum = " << sum << endl;
}

bool Search(Tree *root, int data)
{

    if (root == nullptr)
    {
        return 0;
    }

    stack<Tree *> temp;
    temp.push(root);

    while (!temp.empty())
    {
        Tree *tree = temp.top();

        if (data > tree->_data)
        {

            temp.pop();
            if (tree->right != nullptr)
            {
                temp.push(tree->right);
            }
        }
        else if (data < tree->_data)
        {
            temp.pop();
            if (tree->left != nullptr)
            {
                temp.push(tree->left);
            }
        }
        else if (data == tree->_data)
        {
            return true;
        }
    }

    return false;
}



#endif