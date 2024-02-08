/*
    C++ Buổi 10_Bài 06(b).Bài toán giao của ba dãy số.
    Cho ba dãy số A[], B[], C[] gồm N1, N2, N3 phần tử đã được sắp xếp. Hãy đưa ra các phần tử có mặt trong cả ba dãy theo thứ tự tăng dần. Nếu không có đáp án, in ra -1.

    Input Format
    Dòng đầu tiên đưa vào số lượng bộ test T. Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm bốn dòng: dòng thứ nhất đưa vào N1, N2, N3 là số phần tử của mảng A[], B[], C[]; các dòng tiếp theo đưa vào 3 dãy A[], B[], C[]. Ràng buộc: 1≤T≤100; 1≤ N1, N2, N3 ≤10^6, 0≤ A[i], B[j], C[k] ≤10^18.

    Output Format
    Đưa ra kết quả mỗi test theo từng dòng.

    Ví dụ:
    Dữ liệu vào:
    1
    6 5 8
    1 5 10 20 40 80
    6 7 20 80 100
    3 4 15 20 30 70 80 120

    Dữ liệu ra:
    20 80
*/

#include <iostream>
#include <algorithm>
#include <set>
#define ll long long
using namespace std;

void EnterArr(ll* arr, int num)
{
    for (int i = 0; i < num; i++)
        cin >> arr[i];
}

int Binary_Search(ll* arr, int num, ll data)
{
    int start = 0;
    int end = num - 1;
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

bool CheckIntersion(set<ll> intersect)
{
    if (intersect.empty())
        return false;
    return true;
}

int min_of_three_elements(int a, int b, int c)
{
    return min(min(a, b), c);
}

void IntersectionOfThreeArray(ll* a, ll* b, ll* c, int n1, int n2, int n3)
{
    set<ll> intersect;
    int min = min_of_three_elements(n1, n2, n3);

    for (int i = 0; i < min; i++)
    {
        if (min == n1)
        {
            int pos1 = Binary_Search(b, n2, a[i]);
            int pos2 = Binary_Search(c, n3, a[i]);

            if (pos1 != -1 && pos2 != -1)
                intersect.insert(a[i]);
        }
        else if (min == n2)
        {
            int pos1 = Binary_Search(a, n1, b[i]);
            int pos2 = Binary_Search(c, n3, b[i]);

            if (pos1 != -1 && pos2 != -1)
                intersect.insert(b[i]);
        }
        else
        {
            int pos1 = Binary_Search(a, n1, c[i]);
            int pos2 = Binary_Search(b, n2, c[i]);

            if (pos1 != -1 && pos2 != -1)
                intersect.insert(c[i]);
        }
    }

    if (CheckIntersion(intersect))
        for (auto i : intersect)
            cout << i << " ";
    else
        cout << -1;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;

        ll* a = new ll[n1];
        ll* b = new ll[n2];
        ll* c = new ll[n3];

        EnterArr(a, n1);
        EnterArr(b, n2);
        EnterArr(c, n3);

        IntersectionOfThreeArray(a, b, c, n1, n2, n3);
        cout << endl;
        
        delete[] a;
        delete[] b;
        delete[] c;        
    }
    return 0;
}