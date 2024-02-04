#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, m; cin >> n >> m;
    vector <ll> a(n);
    vector <ll> b(m);
    for (int i = 0; i<n; i++) cin >> a[i];
    for (int i = 0; i<m; i++) cin >> b[i];
    //Giao 2 mảng a, b
    set <ll> giao;
    set <ll> resgiao;
    for (auto it : a) giao.insert(it);
    for (auto it : b) 
    {
        if (giao.count(it) == 1) resgiao.insert(it);
    }
    for (auto it : resgiao) cout << it << " ";
    cout << endl;
    //Hợp 2 mảng a, b
    set <ll> hop;
    for (auto it : a) hop.insert(it);
    for (auto it : b) hop.insert(it);
    for (auto it : hop) cout << it << " ";
}