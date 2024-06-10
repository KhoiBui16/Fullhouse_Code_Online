#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> adj[1001];
int height[1001];
bool visited[1001];

void DFS(int u, int h) {
    height[u] = h;
    for (int v : adj[u]) {
        if (height[v] == -1) {
            DFS(v, h + 1);
        }
    }
}

void BFS(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty()) {

    }
}

int main() {
    cin >> n;
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(height, -1, sizeof(height));
    memset(visited, false, sizeof(visited));
    DFS(1, 0);
    for (int i = 1; i <= n; i++) {
        cout << height[i] << " ";
    }
    cout << endl;

    return 0;
}
