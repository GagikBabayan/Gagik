#ifndef _BSTREE_H_
#define _BSTREE_H_

#include <iostream>
#include "Node.hpp"
#include <vector>
#include <queue>

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

    void DeleteNode(int);
    void insert(int);
    bool ancestorTree(int **arr, int n);
    int RootSearch(int **arr, int size);
    bool createTree(int **arr, int n, vector<int> &nodes);
    int SearchRoot(int **arr, int n);
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


bool Search(int data, Tree *tree)
{
    return Search(data, tree->root);
}

void dfs(Node *temp)
{
    if (temp)
    {
        dfs(temp->left);
        cout << temp->data << " ";
        dfs(temp->right);
    }
}

void dfs(Tree *tree)
{
    dfs(tree->root);
}


void bfs(Node *root)
{
    queue<Node *> q;
    if (root)
    {
        q.push(root);
        cout << root->data << " ";
    }

    while (!q.empty())
    {
        root = q.front();
        q.pop();

        if (root->left)
        {
            q.push(root->left);
            cout << root->left->data << " ";
        }

        if (root->right)
        {
            q.push(root->right);
            cout << root->right->data << " ";
        }
    }
}

void bfs(Tree *tree)
{
    bfs(tree->root);
}

bool is_Empty(Node *tree)
{
    return tree == nullptr;
}

int Min(Node *root)
{
    while (root->left)
    {
        root = root->left;
    }
    return root->data;
}

int Max(Node *root)
{
    while (root->right)
    {
        root = root->right;
    }
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

void Tree::insert(int value)
{
    if (!root)
    {
        return;
    }

    queue<Node *> queue;
    queue.push(root);

    while (!queue.empty())
    {
        Node *current = queue.front();
        queue.pop();

        if (current->left)
        {
            queue.push(current->left);
        }
        else
        {
            current->left = new Node(value);
            break;
        }

        if (current->right)
        {
            queue.push(current->right);
        }
        else
        {
            current->right = new Node(value);
            break;
        }
    }
}



void Tree::DeleteNode(int value)
{
    if (!root)
    {
        return;
    }

    Node *current = root;
    Node *prev = NULL;

    while (current != NULL && current->data != value)
    {
        prev = current;
        if (value < current->data)
        {
            current = current->left;
        }
        else
        {
            current = current->right;
        }
    }

    if (current->left == NULL || current->right == NULL)
    {
        Node *newCurrent = (current->left == NULL) ? current->right : current->left;

        if (current == prev->left)
        {
            prev->left = newCurrent;
        }
        else
        {
            prev->right = newCurrent;
        }
    }
    else
    {
        Node *min = NULL;
        Node *temp = current->right;

        while (temp->left != NULL)
        {
            min = temp;
            temp = temp->left;
        }

        if (min == NULL)
        {
            current->right = temp->right;
        }
        else
        {
            min->left = temp->right;
        }

        current->data = temp->data;
    }
}

bool Tree::ancestorTree(int **arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
            if ((arr[i][j] == 1 && arr[j][i] == 1) || (count > 2))
            {
                return false;
            }
        }
    }
    return true;
}



int Tree::SearchRoot(int **arr, int n)
{
    int temp = 0;
    int root;
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i] == 0)
            {
                count++;
            }
            if (count == n)
            {
                temp++;
                if (temp > 1)
                {
                    check = false;
                }
                else
                {
                    check = true;
                    root = i;
                }
            }
        }
    }

    return check ? root : -1;
}

bool Tree::createTree(int **arr, int n, vector<int> &nodes)
{
    int matrix = SearchRoot(arr,n);
    if ((SearchRoot(arr, n)) < 0)
    {
        return false;
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
            if (arr[i][j] == 1 && arr[j][i] == 1)
            {
                return false;
            }
            if (arr[i][j] == 1)
            {
                nodes.push_back(j);
            }
        }
        if (count > 2)
        {
            return false;
        }
    }
    root = new Node(matrix);

    return true;
}

#endif