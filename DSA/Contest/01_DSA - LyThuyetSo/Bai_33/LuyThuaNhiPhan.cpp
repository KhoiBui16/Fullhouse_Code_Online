#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll Expoentiation(long a, long b)
{
    if (b == 0)
        return 1;
    ll res = Expoentiation(a, b / 2);
    if (b % 2 == 0)
        return ((res % MOD) * (res %  MOD)) % MOD;
    else
        return ((((res % MOD) * (res % MOD)) % MOD) * (a % MOD)) % MOD;
}

int main()
{
    long a, b;
    cin >> a >> b;
    ll result = Expoentiation(a, b);
    cout << result;
    return 0;
}