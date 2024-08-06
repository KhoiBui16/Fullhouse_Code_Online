#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
	node *prev;
};

node *makeNode(int data){
	node *newNode = new node();
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

void duyet(node *head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
}

int size(node *head){
	int dem = 0;
	while(head != NULL){
		dem++;
		head = head->next;
	}
	return dem;
}

void themDau(node **head,int value){
	node *newNode = makeNode(value);
	newNode->next = (*head);
	if(*head != NULL){
		(*head)->prev = newNode;
	}
	(*head) = newNode;
}

void themCuoi(node **head,int value){
	if(*head == NULL){
		themDau(head,value);
	}
	else{
		node *newNode = makeNode(value);
		node *tmp = *head;
		while(tmp->next != NULL){
			tmp = tmp->next;
		}
		tmp->next = newNode;
		newNode->prev = tmp;
	}
}

void themGiua(node **head, int value, int k)
{
	int n = size(*head);
	if (k < 1 || k > n + 1)
		return;
	if (k == 1)
		themDau(head, value);
	else if (k == n + 1)
		themCuoi(head, value);
	else
	{
		node* temp = (*head);
		for (int i = 1; i <= k - 1; i++)
			temp = temp->next;
		node* newNode = makeNode(value);
		newNode->next = temp;
		newNode->prev = temp->prev;
		temp->prev->next = newNode;
		temp->prev = newNode;
	}
}

void xoaDau(node **head)
{
	if (*head == NULL)
		return;
	node* temp = (*head);
	(*head) = temp->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	delete temp;
}

void xoaCuoi(node** head)
{
	if (*head == NULL)
		return;
	node* temp = (*head);
	while (temp->next != NULL)
		temp = temp->next;
	if (temp == *head)
		*head = NULL;
	else
		temp->prev->next = NULL;
	delete temp;
}

void xoaGiua(node** head, int k)
{
	int n = size(*head);
	if (k < 1 || k > n)
		return;
	if (k == 1)
		xoaDau(head);
	else if (k == n)
		xoaCuoi(head);
	else
	{
		node* temp = (*head);
		for (int i = 1; i < k; i++)
			temp = temp->next;
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		delete temp;
	}
}

int main() {
	node *head = NULL;
	themCuoi(&head,100);
	themDau(&head,5);
	themDau(&head,6);
	themDau(&head,1);
	themDau(&head,3);
	themCuoi(&head,7);
	themGiua(&head, 10, 2);
	xoaDau(&head);
	xoaCuoi(&head);
	xoaGiua(&head, 2);
	duyet(head);
    return 0;
}
