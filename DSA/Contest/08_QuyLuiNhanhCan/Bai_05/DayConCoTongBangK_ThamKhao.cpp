#include <bits/stdc++.h>

using namespace std;

int n, k;
int v[100], a[100];
vector <vector<int>> ans;

void Try(int i)
{
    for (int j=0; j<=1; j++)
    {
        v[i] = j;
        if (i == n)
        {
            int calc = 0;
            for (int u = 1; u<=n; u++)
                if (v[u]) calc += a[u];
            if (calc == k)
            {
                vector <int> x;
                for (int u=1; u<=n; u++)
                    if (v[u]) x.push_back(a[u]);
                ans.push_back(x);
            }
        }
        else Try(i+1);
    }
}

void Solve()
{
    ans.clear();
    cin >> n >> k;
    for (int i=1; i<=n; i++) cin >> a[i];
    sort(a+1, a+n+1);
    Try(1);
    if (!ans.size()) cout << -1 << endl;
    else
    {
        sort (ans.begin(), ans.end());
        for (int i=0; i<ans.size(); i++)
        {
            cout << "[";
            for (int j=0; j<ans[i].size()-1; j++) cout << ans[i][j] << " ";
            cout << ans[i][ans[i].size()-1] << "] ";
        }
        cout << endl;
    }
}


int main()
{
    int t; cin >> t;
    while (t--) Solve();
}