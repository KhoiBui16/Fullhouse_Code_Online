#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s; s += ".";
    int n = s.size();
    bool dp[n + 1][n + 1];
    memset(dp, false, sizeof(dp));
    //* truong hop xau con co do dai la 1
    for (int i = 1; i <= n; i++) dp[i][i] = true;
    //* truong hop do dai xau cua xau con tu 2 -> n
    int res = 1;
    for (int len = 2; len <= n; len++)
    {
        for (int start = 1; start <= n - len + 1; start++)
        {
            int end = start + len - 1;
            if (len == 2 && s[start] == s[end])
                dp[start][end] = true;
            else
            {
                if (dp[start + 1][end - 1] && s[start] == s[end])
                    dp[start][end] = true;
            }

            if (dp[start][end] == true)
                res = max(res, len);
        }
    }
    cout << res;
    return 0;
}
