#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll countSteps(int n, int k, vector<int>& dp)
{
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++) // thay vì check điều kiện i >= j => có thể check chỗ j <= min(i, k) và bỏ điều kiện i >= j
        {
            if (i >= j)
            {
                dp[i] = dp[i] % MOD + dp[i - j] % MOD;
                dp[i] %= MOD;
            }
        }
    }
    return dp[n];
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> dp(n + 1, 0);
    cout << countSteps(n, k, dp);
    return 0;
}
