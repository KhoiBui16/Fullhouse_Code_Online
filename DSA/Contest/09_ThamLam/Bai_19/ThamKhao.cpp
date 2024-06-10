#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n; cin >> n;
    vector <int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    ll waitingTime = 0, ans = 0;
    sort (a.begin(), a.end());
    for (auto t: a)
    {
        if (waitingTime <= t) 
        {
            ans++;
            waitingTime += t;
        }
        else continue;
    }
    cout << ans;
}