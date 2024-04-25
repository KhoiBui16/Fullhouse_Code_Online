#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> a(1001);
bool ok;

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
        a[i--] = 0;
    if (!i)
        ok = 0;
    else
        a[i] = 1;
}

void ktao()
{
    for (int i = 1; i <= n; i++)
        a[i] = 0;
}

void Solve()
{
    cin >> n;
    int k = (1 << n);
    string s[k + 5];
    s[1] = "0";
    s[2] = "1";
    if (n > 1)
    {
        int t = 2;
        for (int i = 2; i <= n; i++)
        {
            int l = (1 << i);
            for (int j = 1; j <= t; j++)
            {
                s[l - j + 1] = "1" + s[j];
                s[j] = "0" + s[j];
            }
            t = l;
        }
    }
    for (int i = 1; i <= k; i++)
        cout << s[i] << " ";
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        Solve();
}