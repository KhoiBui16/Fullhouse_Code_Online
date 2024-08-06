#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || j == 1)
                dp[i][j] = a[i][j];
            else
            {
                if (a[i][j] == 0) continue;
                dp[i][j] = min({
                    dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j]
                }) + 1;
            }
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans;
    return 0;
}
