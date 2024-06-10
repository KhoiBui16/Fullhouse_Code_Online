#include <bits/stdc++.h>

using namespace std;

int n;

void Solve()
{
    cin >> n;
    int a[n+5][n+5];
    for (int j = 1; j <= n; j++) cin >> a[1][j];
    int col = n - 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= col; j++)
            a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
        col--;
    }
    col = n;
    vector<vector<int>> ans;
    for (int i = 1; i <= n; i++)
    {
        vector<int> x;
        for (int j=1; j<=col; j++) x.push_back(a[i][j]);
        col--;
        ans.push_back(x);
    }
    for (int i=ans.size()-1; i>=0; i--)
    {
        for (int j=0; j<ans[i].size(); j++)
        {
            if (!j) cout << "[";
            cout << ans[i][j];
            if (j == ans[i].size()-1) cout << "] ";
            if (j < ans[i].size()-1) cout << " ";
        }
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        Solve();
}
