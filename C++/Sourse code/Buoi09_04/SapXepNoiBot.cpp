/*
    C++ Buổi 09_Bài 04.Sắp xếp nổi bọt.(Bubble sort)
    Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp nổi bọt.

    Input Format
    Dòng đầu tiên là số nguyên dương N. 
    Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.(1<=N<=10^3; 0<=A[i]<=10^9)

    Output Format
    In ra các bước của thuật toán sắp xếp nổi bọt.

    Dữ liệu vào:
    5
    41 18 64 20 9
    Dữ liệu ra:
    Buoc 1: 18 41 20 9 64
    Buoc 2: 18 20 9 41 64
    Buoc 3: 18 9 20 41 64
    Buoc 4: 9 18 20 41 64
 */

#include <iostream>

using namespace std;

void BubbleSort(long[], int);

int main()
{
    int n;
    cin >> n;
    long a[1000];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    BubbleSort(a, n);

    return 0;
}

void BubbleSort(long a[], int n)
{
    int tnc = 1;
    for (int i = n - 1; i > 0; --i)
    {
        for (int j = 0; j < i; ++j)
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        cout << "Buoc " << tnc << ": ";
        for (int i = 0; i < n; ++i)
            cout << a[i] << " ";
        tnc++;
        if (i <= n + 1)
            cout << endl;
    }
}