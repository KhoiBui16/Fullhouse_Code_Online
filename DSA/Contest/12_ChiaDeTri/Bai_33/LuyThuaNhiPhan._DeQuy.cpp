#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

ll binPow(long a, long b)
{
    if (b == 0)
        return 1;
    ll res = binPow(a, b / 2);
    if (b % 2 == 0)
        return ((res % MOD)  * (res % MOD)) % MOD;
    else
        return ((((res % MOD)  * (res % MOD)) % MOD) * (a % MOD))  % MOD;
}

int main()
{
    long a, b;
    cin >> a >> b;
    cout << binPow(a, b);
    return 0;
}
