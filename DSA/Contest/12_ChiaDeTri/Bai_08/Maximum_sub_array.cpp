#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int s = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
        ans = max(ans, s);
        if (s < 0) s = 0;
    }
    cout << ans;
    return 0;
}
