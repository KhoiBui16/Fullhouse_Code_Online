#include <bits/stdc++.h>
#define MAX 10
using namespace std;

bool ok, f[MAX];
int t, a[MAX], idx[MAX];
vector<vector<int>> res;
vector<int> tmp;

void init()
{
    for (int  i = 0; i < 5; i++)
        cin >> a[i];
    for (int i = 0; i < 10; i++)
    {
        idx[i] = 0;
        f[i] = false;
    }
    ok = false;
    tmp.clear();
}

void TryDau()
{
    for (int i = 1; i <= 3; i++)
    {
        tmp.push_back(i);
        if (tmp.size() == 4) res.push_back(tmp);
        else TryDau();
        tmp.pop_back();
    }
}

bool check()
{
    for (vector<vector<int>>::size_type i = 0; i < res.size(); i++)
    {
        int s = a[idx[0]];
        for (int j = 0; j < 4; j++)
        {
            if (res[i][j] == 1) s += a[idx[j + 1]];
            if (res[i][j] == 2) s -= a[idx[j + 1]];
            if (res[i][j] == 3) s *= a[idx[j + 1]];
        }
        if (s == 23) return true;
    }
    return false;
}

void Try(int i)
{
    if (ok) return;
    for (int j = 0; j < 5; j++)
    {
        if (!f[j])
        {
            idx[i] = j;
            f[j] = true;
            if (i == 4)
            {
                if (check())
                {
                    ok = true;
                    return;
                }
            }
            else Try(i + 1);
            f[j] = false;
        }
    }
}

void solve()
{
    init();
    Try(0);
    if (ok) cout << "YES";
    else cout << "NO";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    TryDau();
    cin >> t;
    while(t--) solve();
    return 0;
}