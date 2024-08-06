#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll soCachTung(int n, vector<int>& dp)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i >= j)
            {
                dp[i] = (dp[i] + dp[i - j]);
                dp[i] %= MOD;
            }
        }
    }
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    cout << soCachTung(n, dp);
    return 0;
}
