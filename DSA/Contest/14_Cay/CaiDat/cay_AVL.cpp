#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left, *right;
    int height;
};

node *makeNode(int data)
{
    node *newNode = new node;
    newNode->data = data;
    newNode->height = 1;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void NLR(node *root)
{
    if (root != NULL)
    {
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

void LNR(node *root)
{
    if (root != NULL)
    {
        LNR(root->left);
        cout << root->data << " ";
        LNR(root->right);
    }
}

int getHeight(node *root)
{
    if (root == NULL)
        return 0;
    return root->height;
}

node *quayPhai(node *root)
{
    node *x = root->left;
    root->left = x->right;
    x->right = root;

    // Cập nhật chiều cao
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    x->height = 1 + max(getHeight(x->left), getHeight(x->right));

    return x;
}

node *quayTrai(node *root)
{
    node *y = root->right;
    root->right = y->left;
    y->left = root;

    // Cập nhật chiều cao
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));

    return y;
}

node *insertNode(node *root, int x)
{
    if (root == NULL)
        return makeNode(x);
    if (x < root->data)
        root->left = insertNode(root->left, x);
    else if (x > root->data)
        root->right = insertNode(root->right, x);
    else
        return root;

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    int balance = getHeight(root->left) - getHeight(root->right);

    if (balance > 1 && x < root->left->data) // Trái trái
    {
        return quayPhai(root);
    }
    else if (balance > 1 && x > root->left->data) // Trái phải
    {
        root->left = quayTrai(root->left);
        return quayPhai(root);
    }
    else if (balance < -1 && x > root->right->data) // Phải phải
    {
        return quayTrai(root);
    }
    else if (balance < -1 && x < root->right->data) // Phải trái
    {
        root->right = quayPhai(root->right);
        return quayTrai(root);
    }

    return root;
}

node *findMaxLeft(node *root)
{
    node *tmp = root;
    while (tmp->right != NULL)
        tmp = tmp->right;
    return tmp;
}

// node *deleteNode(node *root, int x)
// {
//     if (root == NULL)
//         return root;

//     if (x < root->data)
//         root->left = deleteNode(root->left, x);
//     else if (x > root->data)
//         root->right = deleteNode(root->right, x);
//     else // node đang cần xóa: x == root->data
//     {
//         // Trường hợp có 1 con hoặc là 0 có con
//         if (root->left == NULL || root->right == NULL)
//         {
//             node *tmp = root->left ? root->left : root->right;
//             // TH: 0 con
//             if (tmp == NULL)
//             {
//                 tmp = root;
//                 root = NULL;
//                 delete tmp;
//             }
//             else
//             {
//                 // Sao chép dữ liệu từ con sang node hiện tại và xóa con
//                 *root = *tmp;
//                 delete tmp;
//             }
//         }
//         else
//         {
//             // TH: lớn nhất bên trái (nhỏ nhất bên phải)
//             node *tmp = findMaxLeft(root->left);
//             root->data = tmp->data;
//             root->left = deleteNode(root->left, tmp->data);
//         }
//     }

//     if (root == NULL)
//         return root;

//     root->height = 1 + max(getHeight(root->left), getHeight(root->right));

//     int balance = getHeight(root->left) - getHeight(root->right);

//     if (balance > 1 && getHeight(root->left->left) >= getHeight(root->left->right)) // Trái trái
//         return quayPhai(root);
//     if (balance > 1 && getHeight(root->left->left) < getHeight(root->left->right)) // Trái phải
//     {
//         root->left = quayTrai(root->left);
//         return quayPhai(root);
//     }
//     if (balance < -1 && getHeight(root->right->right) >= getHeight(root->right->left)) // Phải phải
//         return quayTrai(root);
//     if (balance < -1 && getHeight(root->right->right) < getHeight(root->right->left)) // Phải trái
//     {
//         root->right = quayPhai(root->right);
//         return quayTrai(root);
//     }

//     return root;
// }

node *deleteNode(node *root, int x)
{
    if (root == NULL)
        return root;

    if (x < root->data)
        root->left = deleteNode(root->left, x);
    else if (x > root->data)
        root->right = deleteNode(root->right, x);
    else // node đang cần xóa: x == root->data
    {
        // Trường hợp có 1 con hoặc là 0 có con
        if (root->left == NULL || root->right == NULL)
        {
            node *tmp = root->right;
            // TH: 1 con
            if (root->left != NULL)
            {
                tmp = root->left;
            }
            // TH: 0 con
            if (tmp == NULL)
            {
                tmp = root;
                root = NULL;
                delete tmp;
            }
            else
            {
                // Sao chép dữ liệu từ con sang node hiện tại và xóa con
                root->data = tmp->data;
                root->left = tmp->left;
                root->right = tmp->right;
                root->height = tmp->height;
                delete tmp;
            }
        }
        else
        {
            // TH: lớn nhất bên trái (nhỏ nhất bên phải)
            node *tmp = findMaxLeft(root->left);
            root->data = tmp->data;
            root->left = deleteNode(root->left, tmp->data);
        }
    }

    // Kiểm tra xem root có null sau khi xóa hay không
    if (root == NULL)
        return root;

    // Cập nhật chiều cao của node hiện tại
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    // Kiểm tra cân bằng và thực hiện quay nếu cần thiết
    int balance = getHeight(root->left) - getHeight(root->right);

    if (balance > 1 && getHeight(root->left->left) >= getHeight(root->left->right)) // Trái trái
        return quayPhai(root);
    if (balance > 1 && getHeight(root->left->left) < getHeight(root->left->right)) // Trái phải
    {
        root->left = quayTrai(root->left);
        return quayPhai(root);
    }
    if (balance < -1 && getHeight(root->right->right) >= getHeight(root->right->left)) // Phải phải
        return quayTrai(root);
    if (balance < -1 && getHeight(root->right->right) < getHeight(root->right->left)) // Phải trái
    {
        root->right = quayPhai(root->right);
        return quayTrai(root);
    }

    return root;
}



int main()
{
    node *root = NULL;
    root = insertNode(root, 30);
    root = insertNode(root, 25);
    root = insertNode(root, 35);
    root = insertNode(root, 20);
    root = insertNode(root, 28);
    root = insertNode(root, 31);
    root = insertNode(root, 40);
    root = insertNode(root, 17);
    root = insertNode(root, 22);
    root = insertNode(root, 27);
    root = insertNode(root, 29);

    cout << "NLR (Preorder): ";
    NLR(root);
    cout << endl;

    root = deleteNode(root, 29);
    cout << "NLR (Preorder): ";
    NLR(root);

    return 0;
}
