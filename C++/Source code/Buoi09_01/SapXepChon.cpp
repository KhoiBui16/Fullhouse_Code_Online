/*  
    C++ Buổi 09_Bài 01.Sắp xếp chọn.(selection sort)
    Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp chọn.

    Input Format
    Dòng đầu tiên là số nguyên dương N. 
    Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.(1<=N<=10^3; 0<=A[i]<=10^9)

    Output Format
    In ra các bước của thuật toán sắp xếp chọn.

    Ví dụ:
    Dữ liệu vào
    5
    5 4 3 2 1
    Dữ liệu ra
    Buoc 1: 1 4 3 2 5
    Buoc 2: 1 2 3 4 5
    Buoc 3: 1 2 3 4 5
    Buoc 4: 1 2 3 4 5
*/

#include <iostream>

using namespace std;

void EnterInput(int[], int&);
void SelectingSort(int[], int);

int main()
{
    int n;
    cin >> n;
    int a[1000];
    EnterInput(a, n);
    SelectingSort(a, n);

    return 0;
}

void EnterInput(int a[], int& n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void SelectingSort(int a[], int n)
{
    int cnt = 1;
    for (int i = 0; i < n - 1; ++i)
    {
        int vt_min = i;
        for (int j = i + 1; j < n; ++j)
            if (a[j] < a[vt_min])
                vt_min = j;

        if (vt_min != i)
        {
            int tmp = a[i];
            a[i] = a[vt_min];
            a[vt_min] = tmp;
        }
        cout << "Buoc " << cnt << ": ";
        for (int i = 0; i < n; ++i)
            cout << a[i] << " ";
        cnt++;
        cout << endl;
    }
}