#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
using ll = long long;

ll productSum(vector<long> a)
{
    ll product = 0;
    for (vector<long>::size_type i = 0; i < a.size(); i++) {
        product += (a[i] * i);
        product %= MOD;
    }
    return product;
}

void solve()
{
    int n; cin >> n;
    vector<long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    ll result = productSum(a);
    cout << result;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
