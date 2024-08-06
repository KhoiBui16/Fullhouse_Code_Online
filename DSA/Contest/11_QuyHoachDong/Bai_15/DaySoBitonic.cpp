#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    vector<int> dp1(n + 1);
    vector<int> dp2(n + 1);
    dp1[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        dp1[i] = a[i];
        for (int j = 1; j < i; j++)
        {
            if (a[i] > a[j])
                dp1[i] = max(dp1[i], dp1[j] + a[i]);
        }
    }
    dp2[0] = 0;
    for (int i = n; i >= 1; i--)
    {
        dp2[i] = a[i];
        for (int j = n; j > i; j--)
        {
            if (a[i] > a[j])
                dp2[i] = max(dp2[i], dp2[j] + a[i]);
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, dp1[i] + dp2[i] - a[i]); //* trừ a[i] là để trừ đi việc bị lặp khi tìm lớn nhất trong 2 dãy con và bị trùng đỉnh bitonic
    cout << ans;
    return 0;
}
