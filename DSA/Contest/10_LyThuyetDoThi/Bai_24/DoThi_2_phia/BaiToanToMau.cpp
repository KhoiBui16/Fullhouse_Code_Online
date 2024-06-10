#include <bits/stdc++.h>
using namespace std;

int n, m;
int color[1001];
vector<int> adj[1001];

bool DFS(int u, int par) {
    color[u] = 3 - color[par];
    for (int v : adj[u]) {
        if (color[v] == 0) {
            if (DFS(v, u) == false)
                return false;
        }
        else if (color[v] == color[u])
            return false;
    }
    return true;
}

int main()
{

    return 0;
}