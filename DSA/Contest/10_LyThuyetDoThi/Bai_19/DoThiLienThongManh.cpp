#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<int> adjList[1001];
bool visited[1001];
int parent[1001];

void DFS(int u)
{
    visited[u] = true;
    for (int v : adjList[u])
    {
        if (!visited[v])
        {
            parent[v] = u;
            DFS(v);
        }
    }
}

bool checkStrongComponents()
{
    for (int i = 1; i <= n; i++)
    {
        memset(visited, false, sizeof(visited));
        DFS(i);
        for (int j = 1; j <= n; j++)
        {
            if (!visited[j])
                return false;
        }
    }
    return true;
}

int main()
{
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
    }
    cout << checkStrongComponents();

    return 0;
}