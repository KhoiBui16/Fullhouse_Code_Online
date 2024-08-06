#include <bits/stdc++.h>
using namespace std;
using ll  = long long;
const int MOD = 1e9 + 7;

ll countSteps(int n, vector<int>& dp)
{
    dp[0] = 1;
    for (int i = 1; i<= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (i >= j)
            {
                dp[i] = dp[i] + dp[i - j];
                dp[i] %= MOD;
            }
        }
    }
    return dp[n];
}

ll countSteps2(int n, vector<int>& dp)
{
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i <= n; i++)
    {
        dp[i] = (dp[i - 1] % MOD + dp[i - 2] % MOD) % MOD + dp[i - 3] % MOD;
        dp[i] %= MOD;
    }
    return dp[n];
}

int main()
{
    int n; cin >> n;
    vector<int> dp(n + 1, 0);
    cout << countSteps2(n, dp);
    return 0;
}
