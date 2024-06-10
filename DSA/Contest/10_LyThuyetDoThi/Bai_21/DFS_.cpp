#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];

bool DFS(int u, int par) {
    visited[u] = true;
    for (int v : adj[u])
    {
        if (!visited[v])
        {
            if (DFS(v, u))
                return true;
        }
        else if (v != par)
            return true;
    }
    return false;
}

int main()
{
    cin >> n >> m;
    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }
    memset(visited, false, sizeof(visited));
    bool flag = false;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            if (DFS(i, -1)) {
                flag = true;
                break;
            }
        }
    }
    if (flag)
        cout << 1;
    else
        cout << 0;
    return 0;
}
