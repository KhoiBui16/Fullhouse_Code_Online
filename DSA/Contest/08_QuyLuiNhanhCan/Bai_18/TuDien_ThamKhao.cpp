#include <bits/stdc++.h>
#define MAXR 100
#define MAXC 100
using namespace std;

int t, k, m, n;
string s[200];
vector<string> res;
char a[MAXR][MAXC];
bool ok[MAXR][MAXC];
int X[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int Y[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void init()
{
    cin >> k >> m >> n;
    for (int i = 0; i < k; i++)
        cin >> s[i];
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    res.clear();
}

void Try(int i, int j, string temp)
{
    for (int l = 0; l < k; l++) 
        if (s[l] == temp)
            res.push_back(temp);

    for (int l = 0; l < 8; l++)
    {
        int x = i + X[l];
        int y = j + Y[l];
        if (x >= 1 && y >= 1 && x <= m && y <= n && !ok[x][y])
        {
            ok[x][y] = true;
            Try(x, y, temp + a[x][y]);
            ok[x][y] = false;
        }
    }
}

void solve()
{
    init();
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            memset(ok, false, sizeof(ok));
            string str = "";
            ok[i][j] = true;
            Try(i, j, str + a[i][j]);
        }
    }
    if (res.size() == 0) cout << -1 << endl;
    else
    {
        sort(res.begin(), res.end());
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while (t--) solve();
    return 0;
}