#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> G;
    vector<vector<int>> AdjList(n + 1);
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        G.push_back({u, v});
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << " : ";
        sort(AdjList[i].begin(), AdjList[i].end());
        for (int v : AdjList[i])
            cout << v << " ";
        cout << endl;
    }
    return 0;
}