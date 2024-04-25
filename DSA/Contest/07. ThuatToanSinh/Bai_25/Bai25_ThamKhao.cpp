#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> a(1001);
bool ok;

void ktao()
{
    for (int i = 1; i <= n; i++)
        a[i] = 0;
}

void Sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
        a[i--] = 0;
    if (!i)
        ok = 0;
    else
        a[i] = 1;
}

bool check()
{
    for (int i = 1; i <= n - 1; i++)
        if (a[i] == a[i + 1])
            return 0;
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
            for (int i = 1; i <= n; i++)
                cout << a[i];
            cout << endl;
        }
        Sinh();
    }
}

int main()
{
    Solve();
}