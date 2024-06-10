#include <bits/stdc++.h>
using namespace std;

bool checkSort(vector<long> a, vector<long> copy, int n)
{
    for (int i = 0; i < n; i++) 
        if (a[i] != copy[i] && copy[i] != a[n - i - 1])
            return false;
    return true;
}

void solve()
{
    int n; cin >> n;
    vector<long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<long> copy(n);
    copy.assign(a.begin(), a.end());
    sort(copy.begin(), copy.end());
    if (checkSort(a, copy, n)) cout << "YES";
    else cout << "NO";
}

int main()
{
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
