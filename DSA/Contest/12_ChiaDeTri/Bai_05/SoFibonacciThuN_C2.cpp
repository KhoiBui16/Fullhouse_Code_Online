#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
typedef vector<vector<ll>> vll;

void multiMatrix(vll& a, const vll& b, const vll& c)
{
    int size = b.size();
    vll res(size, vector<ll> (size, 0));
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < size; k++)
            {
                res[i][j] = (res[i][j] + (b[i][k] % MOD) * (c[k][j] % MOD)) % MOD;
            }
        }
    }
    a = res;
}

void binPow(vll& a, vll& res, ll b)
{
    while (b > 0)
    {
        if (b % 2 != 0)
        {
            multiMatrix(res, res, a);
        }
        multiMatrix(a, a, a);
        b /= 2;
    }
}

int main()
{
    ll n;
    cin >> n;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    vll base = {{1, 1}, {1, 0}};
    vll res = {{1, 0}, {0, 1}};

    binPow(base, res, n - 1);

    ll fibo = res[0][0];
    cout << fibo % MOD << endl;
    return 0;
}
