#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
int colors[1001];

bool DFS(int u) {
    colors[u] = 1; //* mau xam
    for (int v : adj[u]) {
        if (!colors[v]) {
            if (DFS(v))
                return true;
        }
        else if (colors[v] == 1)
            return true;
    }
    colors[u] = 2;
    return false;
}

int main()
{
    cin >> n >> m;
    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    bool flag = false;
    for (int i = 1; i <= n; i++) {
        if (!colors[i]) {
            if (DFS(i)) {
                flag = true;
                break;
            }
        }
    }
    if (flag) // flag = true la co chu trinh
        cout << 1;
    else
        cout << 0;
    return 0;
}
