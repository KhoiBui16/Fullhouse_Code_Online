#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 10001;

int main()
{
    int n; cin >> n;
    int a[n + 1][n + 1];
    int dp[n + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char x; cin >> x;
            if (x == '.')
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }
    if (a[1][1] == 1)
        dp[1][1] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 && j == 1) continue;
            if (a[i][j] == 1)
            {
                if (i == 1)
                    dp[i][j] = dp[i][j - 1];
                else if (j == 1)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] += (dp[i - 1][j] % MOD + dp[i][j - 1] % MOD) % MOD;
            }
        }
    }
    cout << dp[n][n];
    return 0;
}


//* cách 2
/* #include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;

    vector<vector<char>> a(n, vector<char>(n));
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    if (a[0][0] == '.') {
        dp[0][0] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) continue;
            if (a[i][j] == '*') continue;

            if (i > 0 && a[i - 1][j] == '.') {
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            }
            if (j > 0 && a[i][j - 1] == '.') {
                dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
            }
        }
    }

    cout << dp[n - 1][n - 1];
    return 0;
}
 */
