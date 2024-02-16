/*
    C++ Buổi 10_Bài 20.Số nhỏ nhất lớn hơn A[i].
    Cho mảng A[] gồm N phần tử. Nhiệm vụ của bạn là tìm giá trị nhỏ nhất (thuộc mảng A[]) lớn hơn A[i] (i=0, 1, 2,.., n-1). Đưa ra dấu _ nếu A[i] không có phần tử lớn hơn nó. Ví dụ với mảng A[] = {5, 11, 10, 6}, ta có kết quả là { 6 , _ . 11, 10}.

    Input Format
    Dòng đầu tiên đưa vào n là số phần tử của mảng A[]; Dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng trống.(1≤ N ≤10^5; 1≤ A[i] ≤10^5)

    Output Format
    In kết quả trên 1 dòng.

    Ví dụ:
    Dữ liệu vào:
    10
    41 18467 6334 26500 19169 15724 11478 29358 26962 24464
    Dữ liệu ra:
    6334 19169 11478 26962 24464 18467 15724 _ 29358 26500
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        // auto it = upper_bound(a.begin(), a.end(), b[i]);
        vector<int>::iterator it = upper_bound(a.begin(), a.end(), b[i]);
        if (it == a.end())
            cout << "_ ";
        else
            cout << *it << " ";
    }

    return 0;
}