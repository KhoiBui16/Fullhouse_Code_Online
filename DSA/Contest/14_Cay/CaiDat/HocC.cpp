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
int getHeight(node* root) {
	if (root == NULL)
		return 0;
	return root->height;
}

node *quayPhai(node *root){
	node *x = root->left;
	root->left = x->right;
	x->right = root;
	root->height = 1 + max(getHeight(root->left),getHeight(root->right));
	x->height = 1 + max(getHeight(x->left),getHeight(x->right));
	return x;
}

node *quayTrai(node *root){
	node *y = root->right;
	root->right = y->left;
	y->left = root;
	root->height = 1 + max(getHeight(root->left),getHeight(root->right));
	y->height = 1 + max(getHeight(y->left),getHeight(y->right));
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
		root->left = quayTrai(root->left);
		return quayPhai(root);
	}
	else if(chenhLech < -1 && x > root->right->data){ //phai phai
		return quayTrai(root);
	}
	else if(chenhLech < -1 && x < root->right->data){

		root->right = quayPhai(root->right);
		return quayTrai(root);
	}
	return root;
}



node *findMaxLeft(node *root){
	node *tmp = root;
	while(tmp->right != NULL){
		tmp = tmp->right;
	}
	return tmp;
}
node *deleteNode(node *root,int x){
	if(root == NULL){
		return root;
	}
	if(x < root->data){
		root->left = deleteNode(root->left,x);
	}
	else if(x > root->data){
		root->right = deleteNode(root->right,x);
	}
	else{ //x == root->data  1 0
		if(root->left == NULL || root->right == NULL){
			node *tmp = root->right;
			if(root->left != NULL){
				tmp = root->left;
			}
			if(tmp == NULL){ //0 con
				tmp = root;
				root = NULL;
				delete tmp;
			}
			else{
				*root = *tmp;
				delete tmp;
			}
		}
		else{
			node *tmp = findMaxLeft(root->left);
			root->data = tmp->data;
			root->left = deleteNode(root->left,tmp->data);
		}
	}

	if (root == NULL)
		return root;

	root->height = 1 + max(getHeight(root->left),getHeight(root->right));

	int chenhLech = getHeight(root->left) - getHeight(root->right);
	if(chenhLech > 1 && x < root->left->data){ //Trai trai
		return quayPhai(root);
	}
	else if(chenhLech > 1 && x > root->left->data){
	//Trai phai
		root->left = quayTrai(root->left);
		return quayPhai(root);
	}
	else if(chenhLech < -1 && x > root->right->data){ //phai phai
		return quayTrai(root);
	}
	else if(chenhLech < -1 && x < root->right->data){

		root->right = quayPhai(root->right);
		return quayTrai(root);
	}
	return root;
}
int main(){
	node *root = NULL;
	root = insertNode(root,30);
	root = insertNode(root,25);
	root = insertNode(root,35);
	root = insertNode(root,20);
	root = insertNode(root,28);
	root = insertNode(root,31);
	root = insertNode(root,40);
	root = insertNode(root,17);
	root = insertNode(root,22);
	root = insertNode(root,27);
	root = insertNode(root,29);
	root = insertNode(root,26);
	NLR(root);
	root = deleteNode(root,28);
	cout << "\n";
	NLR(root);

}
