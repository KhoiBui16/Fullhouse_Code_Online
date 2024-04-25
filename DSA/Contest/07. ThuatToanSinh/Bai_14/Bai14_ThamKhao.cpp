#include <bits/stdc++.h>

    using namespace std;

int n, k;
vector<int> a(1005);
bool ok;

void next()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
        i--;
    if (!i)
    {
        ok = 1;
        return;
    }
    a[i]++;
    for (int j = i + 1; j < k + 1; j++)
        a[j] = a[i] + j - i;
}

void Solve()
{
    cin >> n >> k;
    ok = 0;
    set<int> se;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
    }
    next();
    if (ok)
        cout << k << endl;
    else
    {
        int ans = 0;
        for (int i = 1; i <= k; i++)
            if (!(se.find(a[i]) != se.end()))
                ++ans;
        cout << ans << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        Solve();
}