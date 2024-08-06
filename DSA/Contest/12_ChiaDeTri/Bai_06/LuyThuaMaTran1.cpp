#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
typedef vector<vector<ll>> vll;

void MultiMatrix(vll& res, vll a, int n)
{
    ll c[n][n];
    //* cho nay tinh res * a
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

    //* gan lai ket qua nhan 2 ma tran cho res
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[i][j] = c[i][j];
        }
    }
}

void binPow(vll& res, vll a, long n, long k)
{
    //* xu lu bang khu de quy
    while (k != 0)
    {
        if (k % 2 != 0)
        {
            //* cho nay la nhan 2 ma tran
            //* res *= a
            MultiMatrix(res, a, n);
        }
        MultiMatrix(a, a, n);
        k /= 2;
    }
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
            long x;
            cin >> x;
            a[i].push_back(x);
        }
    }
    //* khoi tao ma tran don vi
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}
