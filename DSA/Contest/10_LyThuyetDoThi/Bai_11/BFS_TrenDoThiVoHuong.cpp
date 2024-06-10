#include <bits/stdc++.h>
using namespace std;

int n, m, s; // s la dinh bat dat duyet, n la so dinh, m la so canh
vector<vector<int>> adj;
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
        for (int x : adj[v])
        {
            if (visited[x] == 0)
            {
                q.push(x);
                visited[x] = 1;
            }
        }
    }
}

int main()
{
    // chuyen tu danh sach canh sang danh sach ke => O(V * E) -> O(V + E)
    cin >> n >> m >> s;
    adj.resize(n + 1);
    visited.resize(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
        sort(adj[i].begin(), adj[i].end());
    // tham tu dinh BFS
    BFS(s);
    return 0;
}