#include <bits/stdc++.h>
using namespace std;

int const maxn = 10000001;
int const MOD = 1e9 + 7;
int n, x, dp[maxn];

int main()
{
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = a[i]; j <= x; j++)
        {
            dp[j] = dp[j] + dp[j - a[i]];
            dp[j] %= MOD;
        }
    }

    // In ra số cách tạo ra mỗi giá trị từ 1 đến x
    for (int i = 1; i <= x; i++)
    {
        cout << "Co " << dp[i] << " cach tao ra so tien thu x = " << i << " tu cac dong xu: ";
        for (int j = 0; j < n; j++)
        {
            if (i >= a[j] && dp[i - a[j]] > 0)
            {
                cout << "La " << a[j] << " va " << "d[" << i - a[j] <<  "] = " << dp[i - a[j]] << " ";
            }
        }
        cout << endl;
    }
    cout << dp[x];
    return 0;
}
