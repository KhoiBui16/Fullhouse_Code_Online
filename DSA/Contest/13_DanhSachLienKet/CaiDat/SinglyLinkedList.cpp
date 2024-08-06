#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* createNode(int x)
{
    Node* p = new Node;
    if (p == NULL)
        exit(1);
    p->data = x;
    p->next = NULL;
    return p;
}

struct List
{
    Node* head;
    Node* tail;
};

void initList(List& L)
{
    L.head = L.tail = NULL;
}

void traverse(List L)
{
    Node* p = L.head;
    if (L.head == NULL)
    {
        cout << "List is empty!";
        return;
    }
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int countNode(List L)
{
    int cnt = 0;
    Node* p = L.head;
    while (p != NULL)
    {
        cnt++;
        p = p->next;
    }
    return cnt;
}

void addHead(List& L, int x)
{
    Node* p = createNode(x);
    if (L.head == NULL)
    {
        L.head = p;
        L.tail = L.head;
    }
    else
    {
        p->next = L.head;
        L.head = p;
    }
}

void addTail(List& L, int x)
{
    Node* p = createNode(x);
    if (L.head == NULL)
    {
        L.head = p;
        L.tail = L.head;
    }
    else
    {
        L.tail->next = p;
        L.tail = p;
    }
}

void addPosition(List& L, int x, int k)
{
    int size = countNode(L);
    if (k < 1 || k > size)
        return;
    if (k == 1)
    {
        addHead(L,x);
    }
    else if (k == size + 1)
    {
        addTail(L, x);
    }
    else
    {
        Node* p = L.head;
        for (int i = 1; i < k - 1; i++)
            p = p->next;
        Node* newNode = createNode(x);
        newNode->next = p->next;
        p->next = newNode;
    }
}

void addAfterQ(List& L, Node* Q, int x)
{
    Node* P= createNode(x);
    if (Q != NULL)
    {
        P->next = Q->next;
        Q->next = P;
        if (L.tail == Q)
            L.tail = P;
    }
    else
        addHead(L, x);
}

void removeHead(List& L)
{
    if (L.head == NULL)
    {
        cout << "Can not delete!";
    }
    else
    {
        Node* p = L.head;
        L.head = p->next;
        if (L.head == NULL)
            L.tail = NULL;
        delete p;
    }
}

void removeTail(List& L)
{
    if (L.head == NULL)
    {
        cout << "Can not delete!";
    }
    else
    {
        Node* p = L.head;
        while (p->next != L.tail)
            p = p->next;
        Node* temp = L.tail;
        p->next = NULL;
        L.tail = p;
        delete temp;
    }
}

void removePostion(List& L, int k)
{
    int size = countNode(L);
    if (k < 1 || k > size) return;
    if (k == 1)
    {
        removeHead(L);
    }
    else if (k == size)
    {
        removeTail(L);
    }
    else
    {
        Node* p = L.head;
        Node* q = NULL;
        for (int i = 0; i < k; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        if (L.tail == p)
            L.tail = q;
        delete p;
    }
}

void removeAfterQ(List& L, Node* Q)
{
    if (Q != NULL)
    {
        Node* p = Q->next;
        if (p != NULL)
        {
            if (p == L.tail)
                L.tail = Q;
            Q->next = p->next;
            delete p;
        }
    }
}

void removeNodeX(List& L, int x)
{
    Node* p = L.head;
    Node* Q = NULL;
    while (p != NULL && p->data != x)
    {
        Q = p;
        p = p->next;
    }
    if (p == NULL)
    {
        cout << "X is not in the list!";
        return;
    }
    if (Q != NULL)
        removeAfterQ(L, Q);
    else
        removeHead(L);
}

Node* findKthNode(List L, int k)
{
    int size = countNode(L);
    if (k < 1 || k > size)
        return NULL;
    Node* p = L.head;
    for (int i = 0; i < k; i++)
        p = p->next;
    return p;
}

Node* searchNode(List L, int x)
{
    Node* p = L.head;
    while (p != NULL && p->data != x)
        p = p->next;
    return p;
}

Node* findMaxNode(List L)
{
    if (L.head == NULL) return NULL;
    Node* maxNode = L.head;
    Node* p = L.head;
    while (p != NULL)
    {
        if (p->data > maxNode->data)
            maxNode = p;
        p = p->next;
    }
    return maxNode;
}

void removeList(List& L)
{
    while (L.head != NULL)
    {
        Node* p = L.head;
        L.head = p->next;
        delete p;
    }
    L.tail = NULL;
}

void selectionSort(List& L)
{
    Node* p = L.head;
    Node* q, *minNode;
    while (p != L.tail)
    {
        minNode = p;
        q = p->next;
        while (q != NULL)
        {
            if (q->data > minNode->data)
                minNode = q;
            q = q->next;
        }
        if (minNode != p)
            swap(minNode->data, p->data);
        p = p->next;
    }
}


int main()
{
    List L;
    initList(L);
    return 0;
}
