#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool IsFibo(int n)
{
    ll F0 = 0, F1 = 1, Fn;
    if (n == 0 || n == 1)
        return true;
    for (int i = 3; i <= 93; i++)
    {
        Fn = F0 + F1;
        F0 = F1;
        F1 = Fn;
        if (Fn == n)
            return true;
    }
    return false;
}

ll SumOfDigits(ll n)
{
    ll sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool IsPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (IsFibo(SumOfDigits(i)) && IsPrime(i))
            cout << i << " ";
    }

    return 0;
}
