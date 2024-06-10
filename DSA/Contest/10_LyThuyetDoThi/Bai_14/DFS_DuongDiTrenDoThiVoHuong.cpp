#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<vector<int>> AdjList;
vector<int> visited;
vector<int> res;
bool found;

void DFS(int u, int v)
{
    res.push_back(u);
    visited[u] = 1;
    if (u == v) // tim thay duong di den dinh cuoi
    {
        found = true;
        return;
    }
    for (int neighbor : AdjList[u]) // di tham cac dinh ke
    {
        if (visited[neighbor] == 0) // neu co dinh ke
        {
            DFS(neighbor, v);
            if (found == true) // neu duong di tim thay trong qua trinh de quy 
                return; // thi ket thuc ngay
        }
    }
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
    DFS(s, t);
    if (found == true)
        for (int v : res)
            cout << v << " ";
    else
        cout << -1;
    return 0;
}