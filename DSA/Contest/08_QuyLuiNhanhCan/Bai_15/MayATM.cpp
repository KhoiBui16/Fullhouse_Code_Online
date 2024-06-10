#include <bits/stdc++.h>
using namespace std;

int n;
long long s, a[31];
long long min_count;
bool found;

void Try(int i, int cnt, long long sum)
{
    if (sum > s) return;
    if (sum == s) {
        min_count = min(min_count, (long long)cnt);
        found = true;
        return;
    }
    for (int j = i; j <= n; j++)
        Try(j + 1, cnt + 1, sum + a[j]);    
}

void solve()
{
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1, greater<long long>());
    min_count = INT_MAX;
    found = false;
    Try(1, 0, 0);
    if (!found) cout << -1 << endl;
    else cout << min_count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}