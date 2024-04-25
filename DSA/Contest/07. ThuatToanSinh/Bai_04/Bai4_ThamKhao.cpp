#include <bits/stdc++.h>

using namespace std;

int n;
string s;

void ktao()
{
    for (int i=0; i<n; i++) s += 'A';
}

void sinh()
{
    int i = n-1;
    while (i >= 0 && s[i] == 'B') s[i--] = 'A';
    if (i == -1) return;
    else s[i] = 'B';
}

void Solve()
{
    cin >> n;
    ktao();
    for (int i=1; i <= (1 << n); i++) 
    {
        cout << s << " ";
        sinh();
    }
    s = "";
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while (t--) Solve();
}