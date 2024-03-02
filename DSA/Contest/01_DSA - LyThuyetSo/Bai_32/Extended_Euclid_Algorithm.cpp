#include <bits/stdc++.h>
#define ll long long
using namespace std;

void ExtendedEuclid(ll a, ll b, ll& x, ll& y)
{
    if (b == 0)
    {
        int gcd = a;
        x = 1;
        y = 0;
    }
    else
    {
        ExtendedEuclid(b, a % b, x, y);
        ll temp = x;
        x = y;
        y = temp - (a / b) * y;
    }
}

int main()
{
    ll a, b;
    cin >> a >> b;
    ll x, y;
    ExtendedEuclid(a, b, x, y);
    cout << x << " " << y;
    return 0;
}
// nghe sửa chi tiết vì sao