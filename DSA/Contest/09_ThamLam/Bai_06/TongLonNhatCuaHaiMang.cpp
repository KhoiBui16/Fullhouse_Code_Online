#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll maxOfTwoArray(vector<int> a, vector<int> b, int size)
{
    ll res = 0;
    for (int i = 0; i < size; i++)
        res += (ll)a[i] * b[i];
    return res;
}

void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans = maxOfTwoArray(a, b, n);
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}