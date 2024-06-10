#include <bits/stdc++.h>
using namespace std;

void BFS(int u, vector<vector<int>>& adjList, vector<bool>& visited, vector<int>& parent)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int v : adjList[x])
        {
            if (!visited[v])
            {
                q.push(v);
                parent[v] = x;
                visited[v] = true;
            }
        }
    }
}

int main()
{
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    vector<vector<int>> adjList(n + 1);
    vector<bool> visited(n + 1, false);
    vector<int> parent(n + 1);
    vector<int> path;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
    }
    BFS(s, adjList, visited, parent);
    if (!visited[t])
        cout << -1;
    else
    {
        while (t != 0)
        {
            path.push_back(t);
            t = parent[t];
        }
        reverse(path.begin(), path.end());
        for (int x : path)
            cout << x << " ";
    }
    return 0;
}