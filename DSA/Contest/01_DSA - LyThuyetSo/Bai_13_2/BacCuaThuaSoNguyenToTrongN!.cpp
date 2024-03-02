#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll Legendre(ll n, ll p)
{
    ll ans = 0;
    for (ll i = p; i <= n; i *= p)
        ans += n / i;
    return ans;
}

int main()
{
    ll n, p;
    cin >> n >> p;
    ll result =  Legendre(n , p);
    cout << result;
    return 0;
}