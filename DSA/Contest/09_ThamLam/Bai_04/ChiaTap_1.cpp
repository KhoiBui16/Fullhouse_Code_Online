#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, k; cin >> n >> k;
    vector<long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    ll sum1 = 0, sum2 = 0;
    for (vector<long>::size_type i = 0; i < a.size(); i++) {
        if ((int)i < n - k) sum1 += a[i];
        else sum2 += a[i];
    }
    cout << abs(sum1 - sum2);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}