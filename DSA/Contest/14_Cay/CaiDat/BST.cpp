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

node* insertNode(node *root, int value){
	if(root == NULL){
		return makeNode(value);
	}
	if(value < root->data){
		root->left = insertNode(root->left,value);
	}
	else if(value > root->data){
		root->right = insertNode(root->right,value);
	}
	else{
		return root;
	}
	return root;
}

void NLR(node *root){
	if(root != NULL){
		cout << root->data << " ";
		NLR(root->left);
		NLR(root->right);
	}
}

void LRN(node *root)
{
    if (root)
    {
        LRN(root->left);
        LRN(root->right);
        cout << root->data << " ";
    }
}
void LNR(node *root) {
    if (root != NULL) {
        LNR(root->left);
        cout << root->data << " ";
        LNR(root->right);
    }
}

int treeDepth(node* root) {
    if (root == NULL) {
        return 0;
    }
    int left = treeDepth(root->left);
    int right = treeDepth(root->right);
    return max(left, right)+1;
}


bool find(node* root, int x) {
    if (root == NULL) {
        return false;
    }
    if (root->data == x) {
        return true;
    }
    else if (x < root->data) {
        return find(root->left, x);
    } else {
        return find(root->right, x);
    }
}

void thayThe(node* &tmp, node* &root)
{
	// tham chieu &tmp, &root de thay doi dia chi node temp dang giu de xoa sau khi thay the => xoa node thay the chu khong phai node root
	if (root->left != NULL)
		thayThe(tmp, root->left);
	else {
		tmp->data = root->data;
		tmp = root;
		root = root->right;
	}
}

void deleteNode(node* &root, int x)
{
	if (root != NULL) {
		if (x < root->data) {
			deleteNode(root->left, x);
		}
		else if (x > root->data) {
			deleteNode(root->right, x);
		}
		else {
			node* tmp = root;
			if (root->left == NULL)
				root = root->right;
			else {
				if (root->right == NULL)
					root = root->left;
				else {
					// tim node nho nhat cua cay con ben phai
					thayThe(tmp, root->right);
				}
			}
			delete tmp;
		}
	}
	else {
		cout << "Not found";
	}
}

int main(){
	node *root = NULL;
	root = insertNode(root,40);
	root = insertNode(root,30);
	root = insertNode(root,35);
	root = insertNode(root,27);
	root = insertNode(root,60);
	root = insertNode(root,50);
	root = insertNode(root,70);
	int x; cin >> x;
	// if(find(root,x)){
	// 	cout << "YES";
	// }
	// else cout << "NO";
	NLR(root);
	cout << "\n";
	deleteNode(root, x);
	NLR(root);
	return 0;

}
