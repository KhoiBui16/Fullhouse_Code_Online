#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left, *right;
};

node *makeNode(int data){
	node *newNode  = new node;
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

void insertNode(node *p, int value){
	node *newNode = makeNode(value);
	if(p->left == NULL){
		p->left = newNode;
	}
	else if(p->right == NULL){
		p->right = newNode;
	}
	else{
		newNode->left = p->left;
		p->left = newNode;
	}
}

void NLR(node *root){
	if(root != NULL){
		cout << root->data << " ";
		NLR(root->left);
		NLR(root->right);
	}
}

void LNR(node* root)
{
	if (root != NULL)
	{
		LNR(root->left);
		cout << root->data << " ";
		LNR(root->right);
	}
}

void LRN(node* root)
{
	if (root != NULL)
	{
		LNR(root->left);
		LNR(root->right);
		cout << root->data << " ";
	}
}

int height(node* root)
{
	if (root == NULL)
		return 0;
	int subLeft = height(root->left);
	int subRight = height(root->right);
	return max(subLeft, subRight) + 1;
}

node* InsertNode(node* root, int value)
{
	if (root == NULL)
		return makeNode(value);
	else if (value < root->data)
		root->left = InsertNode(root->left, value);
	else if (value > root->data)
		root->right = InsertNode(root->right, value);
	else

	return root;
}

node* findNode(node* root, int x)
{
	if (root == NULL)
		return NULL;
    if (root->data == x)
        return root;
    else if (x < root->data)
        return findNode(root->left, x);
    else
		return findNode(root->right, x);
}


int main(){
	node* root = NULL;
	root = InsertNode(root, 30);
	root = InsertNode(root, 40);
	root = InsertNode(root, 50);
	root = InsertNode(root, 10);
	root = InsertNode(root, 20);
	root = InsertNode(root, 45);
	NLR(root);
	return 0;
}
