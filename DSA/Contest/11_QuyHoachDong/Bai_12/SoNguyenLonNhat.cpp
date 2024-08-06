#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n, m;
    cin >> n >> m;
    vector<vector<int>> dp(n.size() + 1, vector<int> (m.size() + 1, 0));
    for (int i = 1; i <= n.size(); i++)
    {
        for (int j = 1; j <= m.size(); j++)
        {
            if (n[i - 1] == m[j - 1])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << dp[n.size()][m.size()];
    return 0;
}
