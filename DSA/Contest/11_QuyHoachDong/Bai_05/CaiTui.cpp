#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, v; cin >> n >> v; // n là số đồ vật, v là trọng lượng tối đa của túi
    int w[n], c[n]; // w[i] là trọng lượng mỗi đồ vật, c[i] là giá trị của mỗi đồ vậy

    for (int i = 1; i <= n; i++) cin >> w[i];
    for (int i = 1; i <= n; i++) cin >> c[i];

    int dp[n + 1][v + 1];
    memset(dp, 0, sizeof(dp));

    //* xét trọng lượng đồ vật từ 1 -> n
    for (int i = 1; i <= n; i++)
    {
        //* duyệt qua từng trọng lượng của túi vậy
        for (int j = 1; j <= v; j++)
        {
            //* trường hợp 1: không lựa chọn đồ vật thứ i vào trong túi
            //* => là chỉ lựa chọn đồ vật [i-1] và có trọng lượng là j
            dp[i][j] = dp[i - 1][j];
            //* trường hợp 2: có thể đưa đồ vật có w[i] vào túi j
            //* nghĩa là trọng lượng túi j vẫn còn >= trọng lượng của vật i
            if (j >= w[i])
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + c[i]);
            }
        }
    }
    cout << dp[n][v];
    return 0;
}

//* Cách 2
/* #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int maxValues(vector<vector<int>>& dp, vector<int>& w, vector<int>& v, int n, int s)
{
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=s; j++)
        {
            dp[i][j] = dp[i-1][j];
            if (j >= w[i])
                dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]]+v[i]);
        }
    }
    return dp[n][s];
}

int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> w(n), v(n);
    for (int i=0; i<n; i++) cin >> w[i];
    for (int i=0; i<n; i++) cin >> v[i];
    vector<vector<int>> dp(n+1, vector<int>(s+1));
    cout << maxValues(dp, w, v, n, s);
    return 0;
}
 */
