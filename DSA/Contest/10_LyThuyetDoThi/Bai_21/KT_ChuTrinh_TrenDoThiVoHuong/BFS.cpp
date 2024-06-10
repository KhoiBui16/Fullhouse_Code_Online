#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];
vector<int> parent;

bool BFS(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    parent[u] = -1; 
    while (!q.empty()) {
        int top = q.front();
        q.pop();
        for (int v : adj[top]) {
            if (visited[v] == false) {
                visited[v] = true;
                parent[v] = top;
                q.push(v);
            } else if (v != parent[top]) {
                return true; 
            }
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
    parent.resize(n + 1, -1); 
    for (int i = 1; i <= n; i++) 
    {
        if (visited[i] == false) {
            if (BFS(i) == true){
                cout << 1;
                return 0;
            }
        }
    }
    cout << 0;
    return 0;
}
