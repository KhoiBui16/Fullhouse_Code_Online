#include <bits/stdc++.h>
using namespace std;

int LIS(vector<int>& dp, vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    /* int lengthMax = 1;
    for (int i = 1; i <= a.size(); i++)
    {
        if (dp[i] > lengthMax)
            lengthMax = dp[i];
    }
    return lengthMax; */
    return *max_element(dp.begin(), dp.end()); // Cách thay cho tìm phần tử lớn nhất trong mảng
}

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> dp(n + 1, 1);
    cout << LIS(dp,a);
    return 0;
}
