#include <bits/stdc++.h>

using namespace std;

int n, cnt;
bool ok;
vector <int> a(1001);

void ktao()
{
    cnt = 1;
    a[1] = n;
}

void next()
{
    int i = cnt;
    while (i >= 1 && a[i] == 1) i--;
    if (!i) ok = 0;
    else
    {
        int d = cnt - i + 1;
        a[i]--;
        cnt = i;
        int q = d / a[i];
        int r = d % a[i];
        if (q)
        {
            for (int j=1; j<=q; j++) a[++cnt] = a[i];
        }
        if (r) a[++cnt] = r;
    }
}

void Solve()
{
    cin >> n;
    ok = 1;
    ktao();
    while (ok)
    {
        cout << "(";
        for (int i=1; i<=cnt; i++) 
        {
            cout << a[i];
            if (i == cnt) cout << ") ";
            else cout << " ";
        }
        next();
    }
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while (t--) Solve();
}