#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
int colors[1001];

bool DFS(int u, int par) {
    colors[u] = 3 - colors[par];
    for (int v : adj[u]) {
        if (!colors[v])
        {
            if (!DFS(v, u))
                return false;
        }
        else if (colors[v] == colors[u])
            return false;
    }
    return true;
}

int main()
{
    cin >> n >> m;
    while (m--){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool flag = true;
    for (int i = 1; i<= n; i++) {
        if (!colors[i])
        {
            colors[0] = 1; // cho 1 hoac 2 tùy vào màu mình quy dinh
            if (!DFS(i, 0)) {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
