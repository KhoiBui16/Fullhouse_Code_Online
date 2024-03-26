#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll CountOfDigits(ll n)
{
    if (n < 10)
        return 1;
    return CountOfDigits(n / 10) + 1;
}

int main()
{
    ll n;
    cin >> n;
    ll result = CountOfDigits(n);
    cout << result;
    return 0;
}