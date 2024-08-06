#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    vector<vector<int>> dp(s.size() + 1, vector<int> (t.size() + 1, 0));
    for (int i = 1; i <= s.size(); i++)
    {
        for (int j = 1; j <= t.size(); j++)
        {
            if (s[i - 1] == t[j - 1])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1); //* +1 là cộng với trường hợp hiện tại s[i - 1] == t[j - 1]
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << dp[s.size()][t.size()];
    return 0;
}

/*
    s = AEYBGC
    T = AEUEBC
*/
