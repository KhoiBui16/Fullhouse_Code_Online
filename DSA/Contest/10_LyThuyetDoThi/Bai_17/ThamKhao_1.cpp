#include <bits/stdc++.h>

using namespace std;

vector<bool> visited;
map<int, set<int>> G;
vector<int> parents;
queue<int> q;

void bfs(int u)
{
    visited[u] = 1;
    q.push(u);
    while (!q.empty())
    {
        int s = q.front(); q.pop();
        for (auto v: G[s])
            if (!visited[v])
            {
                visited[v] = 1;
                parents[v] = s;
                q.push(v);
            }
    }
}

void findPath(int s, int t)
{
    bfs(s);
    if (!visited[t]) cout << -1;
    else
    {
        vector <int> path;
        while (t != s)
        {
            path.push_back(t);
            t = parents[t];
        }
        path.push_back(s);
        reverse(path.begin(), path.end());
        for (auto i: path) cout << i << " ";
    }
}


int main()
{
    int n, m, s, t; cin >> n >> m >> s >> t;
    while (m--)
    {
        int u, v; cin >> u >> v;
        G[u].insert(v);
    }
    visited.resize(n+1, 0);
    parents.resize(n+1, 0);
    findPath(s, t);
}
