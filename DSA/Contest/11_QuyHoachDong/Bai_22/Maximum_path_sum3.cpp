#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n + 1][n + 1];
    int dp[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    memset(dp,0, sizeof(dp));
    for (int i = 1; i <= n; i++)
        dp[i][1] = a[i][1];

    for (int j = 2; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
                dp[i][j] = max(dp[i][j - 1], dp[i + 1][j - 1]) + a[i][j];
            else if (i == n)
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j - 1]) + a[i][j];
            else
                dp[i][j] = max({dp[i - 1][j - 1], dp[i][j - 1], dp[i + 1][j - 1]}) + a[i][j];
            //* hoặc có thể gộp thành 1 điều kiện như sau
            //* dp[i][j] = max({dp[i - 1][j - 1], dp[i][j - 1], dp[i + 1][j - 1]}) + a[i][j];
        }
    }

    int maxSum = INT_MIN;
    for (int i = 1; i <= n; i++)
        maxSum = max(maxSum, dp[i][n]);
    cout << maxSum;
    return 0;
}
