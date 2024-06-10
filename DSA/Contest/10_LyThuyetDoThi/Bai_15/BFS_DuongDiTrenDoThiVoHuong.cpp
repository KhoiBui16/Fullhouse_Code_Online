#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<vector<int>> AdjList;
vector<int> visited;
vector<int> res;
bool found;

void BFS(int u, int v)
{
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        res.push_back(x);
        if (x == v)
        {
            found = true;
            return;
        }
        for (int neighbor : AdjList[x])
        {
            if (visited[neighbor] == 0)
            {
                q.push(neighbor);
                visited[neighbor] = 1;
                if (neighbor == v)
                {
                    res.push_back(neighbor);
                    found = true;
                    return;
                }
            }
        }
    }
}

int main()
{
    cin >> n >> m >> s >> t;
    AdjList.resize(n + 1);
    visited.resize(n + 1, 0);
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
        sort(AdjList[i].begin(), AdjList[i].end());
    BFS(s, t);
    if (found == true)
        for (int v : res)
            cout << v << " ";
    else
        cout << -1;
    return 0;
}