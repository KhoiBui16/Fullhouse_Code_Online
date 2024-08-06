#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
typedef vector<vector<ll>> vll;

void multiMatrix(vll& a, vll& b, vll& c)
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
                res[i][j] += (b[i][k] % MOD) * (c[k][j] % MOD);
                res[i][j] %= MOD;
            }
        }
    }
    a = res;
}

void binPow(vll& a, ll b)
{
    int size = a.size();
    vll res(size, vector<ll> (size, 0));
    for (int i = 0; i < size; i++)
        res[i][i] = 1;
    vll base = {{1, 1}, {1, 0}};
    while (b > 0)
    {
        if (b % 2 != 0)
        {
            multiMatrix(res, res, base);
        }
        multiMatrix(base, base, base);
        b /= 2;
    }
    a = res;
}

int main()
{
    ll n;
    cin >> n;
    vll base = {{1, 1}, {1, 0}};
    binPow(base, n - 1);
    ll fibo = base[0][1];
    cout << fibo % MOD << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << base[i][j] << " ";
        cout << endl;
    }
    return 0;
}
