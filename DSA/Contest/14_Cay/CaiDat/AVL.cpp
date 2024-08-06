#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left, *right;
	int height;
};

node *makeNode(int data){
	node *newNode  = new node;
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->height = 1;
	return newNode;
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

int getHeight(node* root) {
	if (root == NULL)
		return 0;
	return 1 + max(getHeight(root->left), getHeight(root->right));
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

node* quayPhai(node* root)
{
    node* x = root->left;
    root->left = x->right;
    x->right = root;

    // Cập nhật chiều cao
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    x->height = 1 + max(getHeight(x->left), getHeight(x->right));
    return x;
}

node* quayTrai(node* root)
{
    node* y = root->right;
    root->right = y->left;
    y->left = root;

    // Cập nhật chiều cao
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));
    return y;
}



node *insertNode(node *root,int x){
	if(root == NULL){
		return makeNode(x);
	}
	if(x < root->data){
		root->left = insertNode(root->left,x);
	}
	else if(x > root->data){
		root->right = insertNode(root->right,x);
	}
	else{
		return root;
	}

	root->height = 1 + max(getHeight(root->left),getHeight(root->right));

	int chenhLech = getHeight(root->left) - getHeight(root->right);

	if(chenhLech > 1 && x < root->left->data){ //Trai trai
		return quayPhai(root);
	}
	else if(chenhLech > 1 && x > root->left->data){
	//Trai phai
		root->left = quayTrai(root->right);
		return quayPhai(root);
	}
	else if(chenhLech < -1 && x > root->left->data){ //phai phai
		return quayTrai(root);
	}
	else{
		root->right = quayPhai(root->left);
		return quayTrai(root);

	}
	return root;
}
int main(){
	node *root = NULL;
	root = insertNode(root, 30);
	root = insertNode(root, 25);
	root = insertNode(root, 35);
	root = insertNode(root, 20);
	root = insertNode(root, 28);
	root = insertNode(root, 31);
	root = insertNode(root, 40);
	root = insertNode(root, 30);
	root = insertNode(root, 17);
	root = insertNode(root, 22);
	root = insertNode(root, 27);
	root = insertNode(root, 29);
	NLR(root);
	return 0;
}
