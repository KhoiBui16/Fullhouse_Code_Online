#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node* next;
    Node* prev;
};

Node* createNode(int x)
{
    Node* p = new Node;
    if (p == NULL)
        exit(1);
    p->val = x;
    p->next = NULL;
    p->prev = NULL;
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

void traverseList(List L)
{
    if (L.head == NULL)
    {
        cout << "List is empty!";
    }
    else
    {
        Node* p = L.head;
        while (p != NULL)
        {
            cout << p->val << " ";
            p = p->next;
        }
        cout << endl;
    }
}

int countNodes(List L)
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
        L.head = L.tail = p;
    }
    else
    {
        p->next = L.head;
        L.head->prev = p;
        L.head = p;
    }
}

void addTail(List& L, int x)
{
    Node* p = createNode(x);
    if (L.head == NULL)
    {
        L.head = L.tail = p;
    }
    else
    {
        L.tail->next = p;
        p->prev = L.tail;
        L.tail = p;
    }
}

void addKthPos(List& L, int x, int k)
{
    Node* p = createNode(x);
    int size = countNodes(L);
    if (k < 1 || k > size + 1)
        return;
    if (k == 1)
        addHead(L, x);
    else if (k == size + 1)
        addTail(L, x);
    else
    {
        Node* cur = L.head;
        for (int i = 1; i <= k - 1; i++)
            cur = cur->next;
        Node* newNode = createNode(x);
        p->next = cur;
        p->prev = cur->prev;
        cur->prev->next = p;
        cur->prev = p;
    }
}

void removeHead(List&L)
{
    if (L.head == NULL)
        return;
    Node* p = L.head;
    L.head = p->next;
    if (L.head == NULL)
        L.tail = NULL;
    delete p;
}

void removeTail(List&L)
{
    if (L.head == NULL)
        return;
    if (L.head == L.tail)
    {
        delete  L.tail;
        L.head = L.tail = NULL;
        return;
    }

    Node* p = L.head;
    while (p->next != L.tail)
        p = p->next;

    delete L.tail;
    L.tail = p;
    L.tail->next = NULL;
}

void removeKthPos(List&L, int k)
{
    int size = countNodes(L);
    if (k < 1 || k > size)
        return;
    if (k == 1)
        removeHead(L);
    else if (k == size)
        removeTail(L);
    else
    {
        Node* p = L.head;
        for (int i = 1; i < k; i++)
            p = p->next;
        p->prev->next = p->next;
        p->next->prev = p->prev;
        delete p;
    }
}

int main()
{
    List L;
    initList(L);
    while (true)
    {
        int x;
        cout << "Enter value of node to add head of list (enter value = -1 to stop): ";
        cin >> x;
        if (x == -1)
            break;
        addHead(L, x);
    }
    cout << "\nList after add head: ";
    traverseList(L);

    while (true)
    {
        int x;
        cout << "Enter value of node to add tail of list (enter value = -1 to stop): ";
        cin >> x;
        if (x == -1)
            break;
        addTail(L, x);
    }
    cout << "\nList after add tail: ";
    traverseList(L);

    while (true)
    {

        int x;
        cout << "Enter value of node to add at the Kth psotion of the list (enter value = -1 to stop): ";
        cin >> x;
        if (x == -1)
            break;
        int pos;
        cout << "Enter the position to add to the list: ";
        cin >> pos;
        addKthPos(L,x, pos);
    }
    cout << "\nList after add at the k position: ";
    traverseList(L);

    int times;
    cout << "\nEnter the times to remove node at head of the list: ";
    cin >> times;
    for (int i = 0; i < times; i++)
        removeHead(L);
    cout << "\nList after remove head of the list " << times << " times: ";
    traverseList(L);

    cout << "\nEnter the times to remove node at the tail of the list: ";
    cin >> times;
    for (int i = 0; i < times; i++)
        removeTail(L);
    cout << "\nList after remove tail of the list " << times << " times: ";
    traverseList(L);

    cout << "\nEnter the times to remove node at the Kth postion of the list: ";
    cin >> times;
    for (int i = 1; i <= times; i++)
    {
        int pos;
        cout << "Enter the " << i << "th pos to remove in list: ";
        cin >> pos;
        removeKthPos(L, pos);
    }
    cout << "\nList after remove Kth position of the list " << times << " times: ";
    traverseList(L);

    return 0;
}
