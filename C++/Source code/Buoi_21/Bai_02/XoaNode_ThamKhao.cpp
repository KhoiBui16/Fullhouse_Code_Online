#include <bits/stdc++.h>
using namespace std;

struct Node{
    long long value;
    Node* next;
};

struct List{
    Node* head;
};
/*
    Một số thao tác thường thấy trên danh sách liên kết đơn:
    - Khởi tạo 1 danh sách rỗng
    - Kiểm tra danh sách liên kết đơn rỗng
    - Tính số lượng Node
    - Thêm 1 node vào đầu/cuối/sau vị trí nào đó
    - Xóa 1 node vào đầu/cuối/sau vị trí nào đó
    - Tìm kiếm 1 node mang giá trị nào đó
*/

void initialList(List& list)
{
    list.head = NULL;
}

bool isEmpty(List list)
{
    if (list.head == NULL) return 1;
    return 0;
}

Node* createNode(long long value)
{
    Node* node = new Node;
    node->value = value;
    node->next = NULL;
    return node;
}

void insertHead(List& list, long long value)
{
    if (isEmpty(list))
    {
        Node* p = createNode(value);
        list.head = p;
        list.head->next = NULL;
    }
    else
    {
        Node* p = createNode(value);
        p->next = list.head;
        list.head = p;

    }
}

void insertBack(List& list, long long value)
{
    if (isEmpty(list))
    {
        Node* p = createNode(value);
        list.head = p;
        list.head->next = NULL;
    }
    else
    {
        Node* node = createNode(value);
        Node* last = new Node;
        for (Node* p = list.head; p != NULL; p = p->next)
        {
            if (p->next == NULL)
            {
                last = p;
            }
        }
        last->next = node;
        node->next = NULL;
    }
}

long long sizeList(List list)
{
    long long cnt = 0;
    for (Node* p = list.head; p != NULL; p = p->next)
    {
        cnt++;
    }
    return cnt;
}

void insertPos(List& list, long long value, long long k)
{
    if (k==1) insertHead(list, value);
    else if (k == sizeList(list)+1) insertBack(list, value);
    else
    {
        Node* node = createNode(value);
        long long cnt = 1;
        for (Node* p = list.head; p != NULL; p = p->next)
        {
            if (cnt == k-1)
            {
                Node* tmp = p->next;
                p->next = node;
                node->next = tmp;
                return;
            }
            cnt++;
        }
    }
}

void eraseValueX(List& list, long long x)
{
    while (list.head != NULL && list.head->value == x)
    {
        Node* tmp = list.head;
        list.head = list.head->next;
        delete tmp;
    }
    if (list.head == NULL) 
    {
        cout << "EMPTY";
        return;
    }
    Node* pre = list.head;
    for (Node* p = list.head; p != NULL;)
    {
        Node* tmp = new Node;
        if (p->value == x)
        {
            tmp = p;
            pre-> next = p->next;
        }
        pre = p;
        p = p->next;
        delete tmp;
    }
}

void printList(List list)
{
    for (Node* p = list.head; p!= NULL; p=p->next)
    {
        cout << p->value << " ";
    }
}

int main()
{
    List list;
    initialList(list);
    int n; long long x; cin >> n >> x;
    for (int i=0; i<n; i++)
    {
        long long value; cin >> value;
        insertBack(list, value);
    }
    eraseValueX(list, x);
    printList(list);
}