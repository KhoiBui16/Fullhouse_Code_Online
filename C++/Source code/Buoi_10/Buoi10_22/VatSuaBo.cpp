#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n; cin >> n;
    ll a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    ll res=0, k=0;
    sort (a, a+n);
    for (int i=n-1; i>=0; i--)
    {
        if (a[i] > k) 
        {
            res += a[i] - k;
            k++;
        }
    }
    cout << res;
}