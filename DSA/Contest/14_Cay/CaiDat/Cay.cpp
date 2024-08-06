#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};

node* createNode(int data)
{
    node* newNode = new node;
    if (newNode == NULL)
        exit(1);
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void insertNode(node* p, int value)
{
    node* newNode = createNode(value);
    if (!(p->left))
        p->left = newNode;
    else if (!(p->right))
        p->right = newNode;
    else
    {
        newNode->left = p->left;
        p->left = newNode;
    }
}

void NLR(node* root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        NLR(root->left);
        NLR(root->right);
    }
}

int main()
{
    node* root = createNode(40);
    node* node2 = createNode(30);
    node* node3 = createNode(60);
    node* node4 = createNode(25);
    node* node5 = createNode(35);
    node* node6 = createNode(50);
    node* node7 = createNode(70);
    return 0;
}
