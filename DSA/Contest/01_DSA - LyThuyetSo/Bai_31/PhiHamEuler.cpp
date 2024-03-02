#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll Euler(ll n)
{
    ll res = n;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            res = res - res / i;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n != 1)
        res = res - res/ n;
    return res;
}

int main()
{
    ll n;
    cin >> n;
    ll res = Euler(n);
    cout << res;

    return 0;
}