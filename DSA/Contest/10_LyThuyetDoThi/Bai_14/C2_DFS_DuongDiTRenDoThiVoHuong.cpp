#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<vector<int>> AdjList;
vector<int> visited;
vector<int> res;

bool DFS(int u, int v)
{
    res.push_back(u);
    visited[u] = 1;
    if (u == v)
        return true;
    for (int neighbor : AdjList[u])
    { 
        if (visited[neighbor] == 0)
            if (DFS(neighbor, v))
                return true;
    }
    res.pop_back(); // truong hop khong co duong di toi dinh v thi se xoa ra phan tu do
    return false; // ket thuc return false de khong co 
}


int main()
{
    cin >> n >> m >> s >> t;
    AdjList.resize(n + 1);
    visited.resize(n + 1, 0);
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
        sort(AdjList[i].begin(), AdjList[i].end());
    if (DFS(s, t))
        for (int v : res)
            cout << v << " ";
    else
        cout << -1;
    return 0;
}