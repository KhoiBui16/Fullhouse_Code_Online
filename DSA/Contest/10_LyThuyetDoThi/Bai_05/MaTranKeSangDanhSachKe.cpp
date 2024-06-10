#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
vector<int> adj[1001];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == 1 || a[j][i] == 1)
                adj[i].push_back(j);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << " : ";
        sort(adj[i].begin(), adj[i].end());
        for (int x : adj[i])
            cout << x << " ";
        cout << endl;
    }
    return 0;
}