#include <bits/stdc++.h>

using namespace std;

int k;
string s;

void Solve()
{
    cin >> k >> s;
    for (int i=0; i<s.size(); i++)
    {
        char maxChar = s[s.size()-1];
        int vt = s.size()-1;
        for (int j=s.size()-1; j>i && k > 0; j--)
        {
            if (maxChar < s[j])
            {
                maxChar = s[j];
                vt = j;
            }
        }
        if (maxChar > s[i] && k > 0)
        {
            swap(s[i], s[vt]);
            k--;
        }
    }
    cout << s << "\n";
}


int main()
{
    int t; cin >> t;
    while (t--) Solve();
}