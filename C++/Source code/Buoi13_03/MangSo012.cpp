/*
    C++ Buổi 13_Bài 03.Mảng số 012
    Cho dãy số A[] gồm có N phần tử, các phần tử trong mảng chỉ là 0 1 hoặc 2. Hãy sắp xếp các phần tử trong mảng theo thứ tự tăng dần.

    Dữ liệu vào:
    Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i].(1≤ N ≤ 10^7; 0 ≤ A[i] ≤ 2)

    Dữ liệu ra:
    In ra mảng được sắp xếp tăng dần.

    Ví dụ:
    Dữ liệu vào:
    10
    1 1 1 2 2 0 1 0 0 2
    Dữ liệu ra:
    0 0 0 1 1 1 1 2 2 2
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    for (int x : vec)
        cout << x << " ";
}