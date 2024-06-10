#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<vector<int>> adjList;
vector<int> visited;
vector<int> res;

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while (!q.empty())
    {
        int v = q.front();
        res.push_back(v);
        q.pop();
        for (int neighbor : adjList[v])
        {
            if (visited[neighbor] == 0)
            {
                q.push(neighbor);
                visited[neighbor] = 1;
            }
        }
    }
}

void printComponents()
{
    for (int i = 1; i <= n; i++)
    {
        res.clear();
        if (visited[i] == 0)
        {
            BFS(i);
            sort(res.begin(), res.end());
            for (int x : res)
                cout << x << " ";
            cout << endl;
        }
    }
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
    for (int i = 1; i <= n; i++)
        sort(adjList[i].begin(), adjList[i].end());
    printComponents();
    return 0;
}