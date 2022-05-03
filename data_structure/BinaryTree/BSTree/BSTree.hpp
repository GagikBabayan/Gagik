#ifndef _BSTREE_H_
#define _BSTREE_H_

#include <iostream>
#include "Node.hpp"

using namespace std;


class Tree
{
public:
    Node *root;

    Tree(int data)
    {
        root = new Node(data);
    }
    Tree()
    {
        root = new Node();
    }
};

void Add(int data, Node *tree)
{
    if (tree->data > data)
    {
        if (tree->left)
        {
            Add(data, tree->left);
        }
        else
        {
            tree->left = new Node(data);
        }
    }
    else
    {
        if (tree->right)
        {
            Add(data, tree->right);
        }
        else
        {
            tree->right = new Node(data);
        }
    }
}

bool Search(int data, Node *tree)
{
    if (tree->data == data)
    {
        return true;
    }
    else if (tree->data > data)
    {
        return Search(data, tree->left);
    }
    else
    {
        return Search(data, tree->right);
    }
    return false;
}

void Print(Node *temp)
{
    if (temp)
    {
        Print(temp->left);
        cout << temp->data << " ";
        Print(temp->right);
    }
}

bool is_Empty(Node *tree)
{
    return tree == nullptr;
}

int Min(Node *root)
{
    while (root->left)
        root = root->left;
    return root->data;
}

int Max(Node *root)
{
    while (root->right)
        root = root->right;
    return root->data;
}

int Sum(Node *root)
{
    if (root)
        return root->data + Sum(root->left) + Sum(root->right);
    return 0;
}

int Sum(Tree *tree)
{
    return Sum(tree->root);
}

int Min(Tree *tree)
{
    return Min(tree->root);
}

int Max(Tree *tree)
{
    return Max(tree->root);
}

void Add(int data, Tree *tree)
{
    Add(data, tree->root);
}

void Print(Tree *tree)
{
    Print(tree->root);
}

bool Search(int data, Tree *tree)
{
    return Search(data, tree->root);
}



#endif 