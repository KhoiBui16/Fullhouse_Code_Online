#include <bits/stdc++.h>
using namespace std;

int n, m, s;
vector<vector<int>> AdjList;
vector<int> visited;

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while (!q.empty())
    {
        int v = q.front();
        cout << v << " ";
        q.pop();
        for (int neighbor : AdjList[v])
        {
            if (visited[neighbor] == 0)
            {
                q.push(neighbor);
                visited[neighbor] = 1;
            }
        }
    }
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
    BFS(s);
    return 0;
}