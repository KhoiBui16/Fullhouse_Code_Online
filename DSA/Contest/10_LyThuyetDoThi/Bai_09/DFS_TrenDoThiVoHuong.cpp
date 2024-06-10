#include <bits/stdc++.h>
using namespace std;

int n, m, s; // s la dinh bat dat duyet, n la so dinh, m la so canh
vector<vector<int>> adj;
vector<int> visited;

void DFS(int u)
{
    cout << u << " "; // tham u xong roi danh dau visited = 1 da tham
    visited[u] = 1;
    // duyet nhung canh ke cua no bang for each
    for (int v : adj[u])
        if (visited[v] == 0)
            DFS(v);
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
    // tham tu dinh DFS
    DFS(s);
    return 0;
}