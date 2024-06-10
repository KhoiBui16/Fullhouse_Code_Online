#include <bits/stdc++.h>

using namespace std;

int n, d = 0, ans = INT_MAX, v[105];
vector<vector<int>> c(105, vector<int>(105));
vector<int> X(100);

void input()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> c[i][j];
    memset(v, 0, sizeof v);
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!v[j])
        {
            v[j] = 1;
            X[i] = j;
            d += c[X[i - 1]][X[i]];
            if (i == n) ans = min(ans, d + c[X[n]][1]);
            else Try(i+1);
            v[j] = 0;
            d -= c[X[i-1]][X[i]];
        }
    }
}

int main()
{
    input();
    X[1] = 1, v[1] = 1;
    Try(2);
    cout << ans;
}