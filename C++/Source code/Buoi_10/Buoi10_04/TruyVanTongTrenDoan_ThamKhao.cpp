#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n; cin >> n;
    vector <ll> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    int q; cin >> q;
    vector <ll> ans;
    while (q--)
    {
        int l, r; cin >> l >> r;
        ll sum = 0;
        for (int i = l-1; i<r; i++)
        sum += a[i];
        ans.push_back(sum);
    }
    for (auto i : ans)
    {
        cout << i << endl;
    }
    
}