#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> a(100);
bool ok;
string s;
vector<string> v;

bool cmp(const string a, const string b)
{
    return (a.size() == b.size()) ? a < b : a.size() < b.size();
}

void ktao()
{
    for (int i = 0; i < n; i++)
        s[i] = '0';
}

void sinh()
{
    int i = n - 1;
    while (i >= 0 && s[i] == '1')
        s[i--] = '0';
    if (i == -1)
        ok = 0;
    else
        s[i] = '1';
}

int main()
{
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    ktao();
    ok = 1;
    sinh();
    while (ok)
    {
        string tmp = "";
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
            {
                tmp += to_string(b[i]);
                tmp += " ";
            }
        v.push_back(tmp);
        sinh();
    }
    sort(v.begin(), v.end(), cmp);
    for (auto x : v)
        cout << x << endl;
}