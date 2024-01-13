/*
   C++ Buổi 04_Bài 27.Tích các số.
   Cho 1 loạt các số trong 1 dãy số, S là tích của tất cả các số trong dãy số này.
   Bạn hãy tìm số dư khi chia S cho 10 ^ 9 + 7.

   Dữ liệu vào:
   Dòng đầu tiên là N : số lượng số trong dãy số.(1<=N<=1000) 
   Dòng thứ 2 là N số trong dãy số.(Các số trong dãy là số không âm không vượt quá 10^9)
    Dữ liệu ra:
    In ra kết quả của bài toán.

    Dữ liệu vào:
    6
    4 8 2 3 4 5
    Dữ liệu ra:
    3840
*/

#include <iostream>
#define ll long long

using namespace std;

void Xuat(ll[], int);

int main()
{
    int n; 
    cin >> n;
    ll a[1000];
    Xuat(a, n);
    return 0;
}

ll mod = (ll)(1e9 + 7);

void Xuat(ll a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll result = 1;
    for (int i = 0; i < n; i++)
    {
        result = result % mod * a[i] % mod;
        result %= mod;
    }
    cout << result % mod;
    // long long max 10^8
    // (A+B)%C = [(A%C)+(B%C)]%C - công thức đồng du 
}