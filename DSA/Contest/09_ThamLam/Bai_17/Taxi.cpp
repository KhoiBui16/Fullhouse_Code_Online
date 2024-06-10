#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt[5];

void solve()
{
    int n; cin >> n; // n nhom
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) { 
        cin >> a[i]; 
        cnt[a[i]]++;
    }
    ll minTaxi = cnt[4] + cnt[3] + cnt[2]/2;
    if (cnt[3] >= cnt[1])
        cnt[1] = 0;
    else 
        cnt[1] = cnt[1] - cnt[3];
    // check thang 2
    cnt[2] %= 2;
    if (cnt[2] != 0) {
        minTaxi += 1;
        if (cnt[1] >= 3) cnt[1] -= 2;
        else cnt[1] = 0;
    }
    if (cnt[1] > 0) minTaxi += cnt[1] / 4;
    cnt[1] %= 4;
    if (cnt[1] > 0) minTaxi += 1;
    cout << minTaxi;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

