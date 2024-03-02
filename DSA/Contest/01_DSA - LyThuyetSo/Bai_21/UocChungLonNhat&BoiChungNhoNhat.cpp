#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    ll a, b;
    cin >> a >> b;

    cout << gcd(a, b) << " " << lcm(a, b);

    return 0;
}