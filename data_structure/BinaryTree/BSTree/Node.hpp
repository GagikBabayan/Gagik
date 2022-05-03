#ifndef _NODE_H_
#define _NODE_H_

struct Node
{
    Node *left;
    Node *right;
    int data;
    Node() : left(nullptr), right(nullptr) {}

    Node(int data) : left(nullptr), right(nullptr), data(data) {}
};

#endif