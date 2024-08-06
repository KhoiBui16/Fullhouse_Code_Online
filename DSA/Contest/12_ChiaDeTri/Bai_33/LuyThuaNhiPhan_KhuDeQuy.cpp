#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

ll binPow(long a, long b)
{
    ll res = 1;
    while (b != 0)
    {
        if (b % 2 != 0)
        {
            res *= a;
            res %= MOD;
        }
        a *= a;
        a %= MOD;
        b /= 2;
    }
    return res;
}

int main()
{
    long a, b;
    cin >> a >> b;
    cout << binPow(a, b);
    return 0;
}
