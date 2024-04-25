#include <bits/stdc++.h>

using namespace std;

int tt;
string s;

void next(string s)
{
    int i = s.length() - 2;
    while (i >= 0 && s[i] >= s[i+1]) i--;
    if (i == -1) cout << "BIGGEST\n";
    else
    {
        int j = s.length()-1;
        while (s[i] >= s[j]) j--;
        swap(s[i], s[j]);
        reverse(s.begin()+i+1, s.end());
        cout << s << endl;
    }
}

void Solve()
{
    cin >> tt >> s;
    cout << tt << " ";
    next(s);
}

int main()
{
    int t; cin >> t;
    while (t--) Solve();
}