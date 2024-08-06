#include <bits/stdc++.h>
using namespace std;

bool TapConTongBangS(vector<bool>& dp, vector<int> a, int s, int n)
{
    dp[0] = true;
    for (int i = 0; i < n; i++)
        for (int j = s; j >= a[i]; j--)
            if (dp[j - a[i]] == true)
                dp[j] = true;
    return dp[s];
}

int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<bool> dp(s + 1, false);
    if (TapConTongBangS(dp, a, s, n))
        cout << 1;
    else
        cout << 0;
    return 0;
}
