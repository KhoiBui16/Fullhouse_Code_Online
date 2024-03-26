#include <bits/stdc++.h>
#define ll long long
using namespace std;

int MinDigit(ll n)
{
    if (n < 10)
        return n;
    int lc = MinDigit(n / 10);
    int digit = n % 10;
    if (digit < lc)
        lc = digit;
    return lc;
}

int MaxDigit(ll n)
{
    if (n < 10)
        return n;
    int lc = MaxDigit(n / 10);
    int digit = n % 10;
    if (digit > lc)
        lc = digit;
    return lc;
}

int main()
{
    ll n;
    cin >> n;
    int minDigit = MinDigit(n);
    int maxDigit = MaxDigit(n);
    cout << maxDigit << " " << minDigit;
    return 0;
}