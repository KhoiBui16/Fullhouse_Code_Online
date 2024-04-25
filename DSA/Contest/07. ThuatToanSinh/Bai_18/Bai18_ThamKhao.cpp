#include <bits/stdc++.h>

using namespace std;

int n;
vector <int> a(1001); //0 = 'A', 1 = 'H'
bool ok;

void ktao()
{
    for (int i=1; i<=n; i++) a[i] = 0;
}

void Sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1) a[i--] = 0;
    if (!i) ok = 0;
    else a[i] = 1;
}

bool check()
{
    if (a[1] == 0 || a[n] == 1) return 0;
    for (int i=1; i<=n-1; i++) if (a[i] && a[i+1]) return 0;
    return 1;
}

void Solve()
{
    cin >> n;
    ktao();
    ok = 1;
    while (ok)
    {
        if (check())
        {
            for (int i=1; i<=n; i++)
                if (a[i] == 0) cout << "A";
                else cout << "H";
            cout << endl;
        }
        Sinh();
    }
}

int main()
{
    int t; cin >> t;
    while (t--) Solve();
}