#include <bits/stdc++.h>
using namespace std;

int n, m, s;
vector<vector<int>> AdjList;
vector<int> visited;

void DFS(int u)
{
    cout << u << " ";
    visited[u] = 1;
    for (int v : AdjList[u])
        if (visited[v] == 0)
            DFS(v);
}

int main()
{
    cin >> n >> m >> s;
    AdjList.resize(n + 1);
    visited.resize(n + 1, 0);
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        AdjList[u].push_back(v);
    }
    DFS(s);
    return 0;
}