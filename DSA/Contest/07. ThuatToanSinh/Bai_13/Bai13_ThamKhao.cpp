#include <bits/stdc++.h>

using namespace std;
int n, k;
bool ok;
string s;

void ktao()
{
    s = "";
    for (int i = 1; i <= n; i++)
        s += 'A';
}

void Sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == 'B')
        s[i--] = 'A';
    if (i == -1)
        ok = 0;
    else
        s[i] = 'B';
}

bool check(string s)
{
    int cnt = 0, res = 0;
    s += 'B';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            cnt++;
        else
        {
            if (cnt == k)
                res++;
            else if (cnt > k)
                return 0;
            cnt = 0;
        }
    }
    return (res == 1);
}

int main()
{
    cin >> n >> k;
    int dem = 0;
    ok = 1;
    ktao();
    while (ok)
    {
        if (check(s))
            dem++;
        Sinh();
    }
    cout << dem << endl;
    ktao();
    ok = 1;
    while (ok)
    {
        if (check(s))
            cout << s << "\n";
        Sinh();
    }
}