#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];

bool DFS(int u, int par) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            if (DFS(v, u))
                return true;
        }
        else if (v != par)
            return true;
    }
    return false;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(visited, false, sizeof(visited));
    int cnt = 0;
    bool flag = false;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cnt++;
            if (DFS(i, 0) || cnt > 1) {
                flag = true;
                break;
            }
        }
    }
    if (flag)
        cout << 0;
    else
        cout << 1;
    return 0;
}
