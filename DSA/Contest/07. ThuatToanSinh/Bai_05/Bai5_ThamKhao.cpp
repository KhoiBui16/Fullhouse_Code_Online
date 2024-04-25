#include <bits/stdc++.h>

using namespace std;

int n, k;
vector <int> a(1001);
bool ok;

void ktao()
{
    for (int i=1; i<=k; i++) a[i] = i;
}

void nextPermutation()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i) i--;
    if (!i) ok = 0;
    else
    {
        a[i]++;
        for (int j=i+1; j<=k; j++) a[j] = a[j-1] + 1;
    }
}

void Solve()
{
    cin >> n >> k;
    ktao();
    ok = 1;
    while (ok)
    {
        for (int i=1; i<=k; i++) cout << a[i];
        cout << " ";
        nextPermutation();
    }
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while (t--) Solve();
}