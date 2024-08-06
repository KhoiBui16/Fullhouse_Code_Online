#include <bits/stdc++.h>
using namespace std;

const int maxn = 1000;
int dp[maxn][maxn];

int main()
{
    int n; cin >> n;
    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = max({dp[i - 1][j - 1], dp[i - 1][j], dp[i - 1][j + 1]}) + a[i][j];
        }
    }
    int maxSum = -1;
    for (int i = 1;i <= n; i++)
        maxSum = max(maxSum, dp[n][i]);
    cout << maxSum;
    return 0;
}
