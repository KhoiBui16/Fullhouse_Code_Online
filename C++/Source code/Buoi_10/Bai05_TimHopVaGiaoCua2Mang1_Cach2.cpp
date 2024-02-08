/*
    C++ Buổi 10_Bài 05.Tìm hợp và giao của 2 mảng 1.
    Cho 2 mảng số nguyên lần lượt gồm n và m phần tử. Gọi mảng a và b lần lượt là mảng chỉ bao gồm các phần tử có thể giống nhau của a và b. Hãy tìm mảng giao và hợp của mảng a và b và liệt kê theo thứ tự tăng dần.

    Input Format
    Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. Dòng thứ 2 là n phần tử trong dãy số 1. Dòng thứ 3 là m phần tử trong dãy thứ 2.(1≤n,m≤10^6; 0≤ai≤10^7)

    Output Format
    Dòng đầu tiên in ra giao của 2 mảng a và b. Dòng thứ 2 in ra hợp của 2 mảng a và b.

    Ví dụ:
    Dữ liệu vào:
    5 6
    1 2 1 2 7
    1 2 3 4 5 6

    Dữ liệu ra:
    1 2
    1 2 3 4 5 6 7
*/


#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

void EnterArray(vector<long>& arr)
{
    for (auto& x : arr)
        cin >> x;
}

int BinarySearch(vector<long>& arr, int num, int data)
{
    int start = 0, end = num - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == data)
            return mid;
        else if (arr[mid] < data)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

void GiaoHaiMang(vector<long>& a, vector<long>& b)
{
    set<long> giao;
    for (auto x : a)
        if (binary_search(b.begin(), b.end(), x))
            giao.insert(x);

    for (auto it : giao)
        cout << it << " ";
}

void HopHaiMang(vector<long>& a, vector<long>& b)
{
    set<long> s(a.begin(), a.end());
    s.insert(b.begin(), b.end());

    for (auto i : s)
        cout << i << " ";
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<long> a(n), b(m);

    EnterArray(a);
    EnterArray(b);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    GiaoHaiMang(a, b);
    cout << endl;
    HopHaiMang(a, b);

    return 0;
}