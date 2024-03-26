#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll SumOfDigits(ll n)
{
    if (n < 10)
        return n;
    return SumOfDigits(n / 10) + n % 10;
}

int main()
{
    ll n;
    cin >> n;
    ll result = SumOfDigits(n);
    cout << result;
    return 0;
}