#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];

bool BFS(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty()) {
        int top = q.front();
        q.pop();
        for (int v : adj[top]) {
            if (!visited[v]) {
                visited[v] = true;
                parent[v] = top;
                q.push(v);
            }
            else if (v != parent[top])
                return true;
        }
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
            if (BFS(i)) {
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
