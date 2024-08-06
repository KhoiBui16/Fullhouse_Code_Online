#include <bits/stdc++.h>
using namespace std;

const int maxn = 120;
int dp[maxn][maxn][maxn];

int main()
{
    string x, y, z;
    cin >> x >> y >> z;
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= x.size(); i++)
    {
        for (int j = 1; j <= y.size(); j++)
        {
            for (int k = 1; k <= z.size(); k++)
            {
                if (x[i - 1] == y[j - 1] && y[j - 1] == z[k - 1])
                    dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j - 1][k - 1] + 1);
                else
                {
                    dp[i][j][k] = max(dp[i - 1][j][k], dp[i][j - 1][k]);
                    dp[i][j][k] = max(dp[i][j][k], dp[i][j][k - 1]);
                }
            }
        }
    }
    cout << dp[x.size()][y.size()][z.size()];
    return 0;
}
