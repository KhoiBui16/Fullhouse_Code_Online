#include <bits/stdc++.h>
using namespace std;

int n, k, a[1001], ok;

void kTao()
{
    for (int i = 1; i <= n; i++)
        a[i] = 0;
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0) // khi tat cac bit la 1 thi cau hinh cuoi cung
    {
        ok = 0;
    }
    else
    {
        a[i] = 1;
    }
}

bool check()
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        cnt += a[i];
    return cnt == k;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ok = 1;
        while (ok)
        {
            if (check())
            {
                for (int i = 1; i <= n; i++)
                    cout << a[i];
                cout << endl;
            }
            sinh();
        }
    }
    return 0;
}