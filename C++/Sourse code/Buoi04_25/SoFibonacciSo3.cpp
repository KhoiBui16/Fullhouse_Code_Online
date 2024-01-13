/*
   C++ Buổi 04_Bài 25.Fibonacci 3.
    Liệt kê những số là số nguyên tố nhỏ hơn N và có tổng các chữ số của nó là một số trong dãy số Fibonacci.

    Dữ liệu vào:
    Dòng duy nhất chứa số nguyên dương N.(1<=N<=10000)
    Dữ liệu ra:
    In ra các số nhỏ hơn N là số nguyên tố và thỏa mãn tổng chữ số của nó là một số trong dãy Fibonacci.
    Các số in cách nhau một khoảng trắng

    Dữ liệu vào:
    150
    Dữ liệu ra:
    2 3 5 11 17 23 41 53 67 71 101 107 113 131 139
*/

#include <iostream>

using namespace std;
using ll = long long;

void GenFibo();
bool IsPrime(int);
ll SumofDigits(int);
bool isFibo(ll);

int main()
{
    GenFibo();
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (IsPrime(i) && isFibo(SumofDigits(i))) cout << i << " ";
    }
}

ll Fibo[94];

void GenFibo()
{
    Fibo[0] = 0;
    Fibo[1] = 1;
    Fibo[2] = 2;
    for (int i = 3; i <= 93; i++)
    {
        Fibo[i] = Fibo[i - 1] + Fibo[i - 2];
    }
}

bool IsPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return false;
    }
    return n > 1;
}

ll SumofDigits(int n)
{
    ll ans = 0;
    while (n > 0)
    {
        ans += (n % 10);
        n /= 10;
    }
    return ans;
}

bool isFibo(ll n)
{
    bool ans = 0;
    for (int i = 0; i <= 93; i++)
    {
        if (Fibo[i] == n) ans = 1;
    }
    return ans;
}