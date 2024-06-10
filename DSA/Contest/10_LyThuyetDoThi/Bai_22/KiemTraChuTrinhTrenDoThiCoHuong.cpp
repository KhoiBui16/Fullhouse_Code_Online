#include <bits/stdc++.h>
using namespace std;

void BFS(int n, int& cnt, vector<vector<int>> adj, vector<int>& inDeg)
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (inDeg[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cnt++;
        for (int v : adj[u])
        {
            inDeg[v]--;
            if (inDeg[v] == 0)
                q.push(v);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adjList(n + 1);
    vector<int> inDeg(n + 1);
    int vertex = 0;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        inDeg[v]++; // tang ban bac vao cua cac dinh v vi do thi co huong la tu u -> v
    }
    // for (int i = 1; i <= n; i++)
    //     sort(adjList[i].begin(), adjList[i].end());
    BFS(n, vertex, adjList, inDeg); // neu ko duyet qua du cac dinh => co chu trinh
    if (!(vertex == n))
        cout << 1;
    else
        cout << 0;
    return 0;
}