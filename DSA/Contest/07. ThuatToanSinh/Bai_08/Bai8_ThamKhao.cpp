#include <bits/stdc++.h>

using namespace std;

int n, k;
string s;

void ktao()
{
    for (int i=0; i<n; i++) s += '0';
}

void Sinh()
{
    int i = n-1;
    while (i >= 0 && s[i] == '1') s[i--] = '0';
    if (i == -1) return;
    else s[i] = '1';
}

void Solve()
{
    cin >> n >> k;
    int cnt;
    ktao();
    for (int i=0; i< (1 << n); i++)
    {
        cnt = 0;
        Sinh();
        for (int i=0; i<n; i++) if (s[i] == '1') cnt++;
        if (cnt != k) continue; 
        cout << s << "\n";
    }
    s = "";
}

int main()
{
    int t; cin >> t;
    while (t--) Solve();
}