#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main()
{
    int a, b; cin >> a >> b;
    ll ans = 0;
    for (int i=0; i<=min(a/2, b); i++)
    {
        int x = min(1ll*a-2*i, 1ll*(b-i)/2);
        if (x>=0) ans = max(ans, 1ll*i+x); 
    }
    cout << ans;
}