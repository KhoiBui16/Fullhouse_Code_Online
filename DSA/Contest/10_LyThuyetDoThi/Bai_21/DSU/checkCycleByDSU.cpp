#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1001;
int n, m;
int Size[MAXN], parent[MAXN];
bool check;

int find(int u) {
    if (parent[u] == u)
        return u;
    return parent[u] = find(parent[u]);
}

bool Union(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v) // cung dai dien -> co chu trinh
        return false;
    if (Size[u] < Size[v])
        swap(u, v);
    parent[v] = u;
    Size[u] += Size[v];
    return true;
}

void makePresent() {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        Size[i] = 1;
    }
}

bool checkCycle(const int& n, const int& m) {
    makePresent();
    for (int i = 1; i <=  m; i++) {
        int u, v;
        cin >> u >> v;
        if (!Union(u, v))
            return true;
    }
    return false;
}

int main() {
    cin >> n >> m;
    if (checkCycle(n, m))
        cout << 1;
    else
        cout << 0;
    return 0;
}
