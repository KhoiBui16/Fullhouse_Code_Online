#include <bits/stdc++.h>

using namespace std;

string s;

void Sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1') s[i--] = '0';
    if (i == -1) cout << s;
    else 
    {
        s[i] = '1';
        cout << s;
    }
}

void Solve()
{
    cin >> s;
    Sinh();
    cout << "\n";
}

int main()
{
    int t; cin >> t;
    while (t--) Solve();
}