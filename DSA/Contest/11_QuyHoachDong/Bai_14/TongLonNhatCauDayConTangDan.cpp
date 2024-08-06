#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll maxSumLIS(vector<int>& dp, vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        dp[i] = a[i];
        for (int j = i - 1; j >= 0; j--)
            if (a[i] > a[j])
                dp[i] = max(dp[i], dp[j] + a[i]);
    }
    return *max_element(dp.begin(), dp.end());
}

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> dp(n);
    cout << maxSumLIS(dp, a);
    return 0;
}
