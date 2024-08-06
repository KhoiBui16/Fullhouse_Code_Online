#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll check(ll n, ll k)
{
    if (k % 2 != 0)
        return 1;
    ll x = pow(2, n - 1);
    if (k == x)
        return n;
    else if (k < x)
        return check(n - 1, k);
    else
        return check(n - 1, k - x);
}

int main()
{
    ll n, k;
    cin >> n >> k;
    cout << check(n, k);

    return 0;
}
