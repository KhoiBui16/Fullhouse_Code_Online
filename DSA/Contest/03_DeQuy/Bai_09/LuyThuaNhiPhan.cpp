#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

long long BinPow(long a, long b)
{
    if (b == 0)
        return 1;
    long long ans = BinPow(a, b / 2);
    if (b % 2 == 0)
        return ((ans % MOD) * (ans % MOD)) % MOD;
    else
        return (((ans % MOD) * (ans % MOD)) % MOD * (a % MOD)) % MOD;
}

int main()
{
    long a, b;
    cin >> a >> b;
    long long result = BinPow(a, b);
    cout << result;
    return 0;
}