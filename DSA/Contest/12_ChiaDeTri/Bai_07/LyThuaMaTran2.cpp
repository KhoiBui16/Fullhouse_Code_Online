#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
typedef vector<vector<ll>> vll;

void multiMatrix(vll& res, vll a, int n)
{
    ll c[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] += (res[i][k] % MOD) * (a[k][j] % MOD);
                c[i][j] %= MOD;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[i][j] = c[i][j];
        }
    }
}

void binPow(vll& res, vll a, int n, int k)
{
    while (k != 0)
    {
        if (k % 2 != 0)
        {
            multiMatrix(res, a, n);
        }
        multiMatrix(a, a, n);
        k /= 2;
    }
}

ll sumOfLastRow(vll res, int n)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum % MOD + res[i][n - 1] %  MOD;
        sum %= MOD;
    }
    return sum;
}

int main()
{
    long n, k;
    cin >> n >> k;
    vll a(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }
    vll res(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                res[i].push_back(1);
            else
                res[i].push_back(0);
        }
    }
    binPow(res, a, n, k);
    cout << sumOfLastRow(res, n);
    return 0;
}
