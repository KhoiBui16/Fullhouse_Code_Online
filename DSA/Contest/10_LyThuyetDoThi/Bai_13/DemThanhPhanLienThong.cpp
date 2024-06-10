#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> adjList;
vector<int> visited;

void DFS(int u)
{
    visited[u] = 1;
    for (int v : adjList[u])
        if (visited[v] == 0)
            DFS(v);
}

int countComponents()
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            DFS(i);
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    cin >> n >> m;
    adjList.resize(n + 1);
    visited.resize(n + 1, 0);
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    cout << countComponents();
    return 0;
}