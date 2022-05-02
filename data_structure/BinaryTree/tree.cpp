#include <iostream>
#include <stack>
#include <queue>
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
 
Tree* Create(int data) {
    Tree* newTree = new Tree;
    if (!newTree) {
        return nullptr;
    }
    newTree->_data = data;
    newTree->left = newTree->right = nullptr;
 
    return newTree;
} 
 
Tree* Insert(Tree* root, int data) {
    if (root == nullptr) {
        root = Create(data);
        return root;
    }
 
    queue<Tree*> q;
    q.push(root);
    while (!q.empty()) {
        Tree* temp = q.front();
        q.pop();
        if (temp->left != nullptr) {
            q.push(temp->left);
        }
        else {
            temp->left = Create(data);
            return root;
        }
        if (temp->right != nullptr) {
            q.push(temp->right);
        }
        else {
            temp->right = Create(data);
            return root;
        }
    }

    return root;
    
}
void Print(Tree* temp) {
    if (temp == nullptr) {
        return;
    }
    Print(temp->left);
    cout << temp->_data << " ";
    Print(temp->right);
}
 
void is_Empty(Tree*& tree) {
    if (!tree) {
        cout << "Tree is empty";
    }
    else {
        cout << "Tree is not empty";
    }
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
 
int main() {
    
    Tree* root = 0;
 
    Add(15, root);
    Add(16, root);
    Add(14, root);
 
    Print(root);
    cout << endl;
    Stack(root);
    cout << endl;
 
    int key = 12;
    root = Insert(root, key);
 
    Print(root);
    cout << endl;
    Stack(root);
    cout << endl;
 
    int a = 17;
    root = Insert(root, a);
 
    Print(root);
    cout << endl;
    Stack(root);
    cout << endl;
 
    
 
    return 0;
}