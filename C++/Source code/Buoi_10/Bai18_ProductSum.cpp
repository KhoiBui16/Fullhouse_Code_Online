/*
    C++ Buổi 10_Bài 18.Product sum.
    Cho mảng A[] gồm N phần tử.Nhiệm vụ của bạn là tìm giá trị lớn nhất của tổng bên dưới bằng cách sắp đặt lại các phần tử trong mảng. Chú ý, kết quả của bài toán có thể rất lớn vì vậy bạn hãy đưa ra kết quả lấy modulo với 10^9+7.

    max = zicma(0, n - 1) Ai*i

    Input Format
    Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]. (1≤ N ≤ 10^5; 0 ≤ A[i] ≤ 10^7)

    Output Format
    In ra kết quả của bài toán lấy dư với (10^9 + 7)

    Ví dụ:
    Dữ liệu vào:
    5
    1 2 3 4 5
    Dữ liệu ra:
    40
*/

#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define mod 1000000007
using namespace std;

ll sumDigitsModMax(long long a[], int n)
{
    sort(a, a + n);
    ll sum_mod_max = 0;
    for (int i = 0; i < n; i++)
    {
        sum_mod_max += a[i] * i;
        sum_mod_max %= mod;
    }
    return sum_mod_max % mod;
}

int main()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    ll result = sumDigitsModMax(a, n);
    cout << result;
    return 0;
}
