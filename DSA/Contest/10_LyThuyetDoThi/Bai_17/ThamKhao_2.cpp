#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<vector<int>> AdjList;
vector<int> visited;
unordered_map<int, vector<int>> paths;
bool found;

void BFS(int u, int v)
{
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    paths[u] = {u}; // Đường đi từ u đến u
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        if (x == v)
        {
            found = true;
            break;
        }
        for (int neighbor : AdjList[x])
        {
            if (visited[neighbor] == 0)
            {
                q.push(neighbor);
                visited[neighbor] = 1;
                paths[neighbor] = paths[x]; // Sao chép đường đi từ x đến neighbor
                paths[neighbor].push_back(neighbor); // Thêm neighbor vào đường đi
            }
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
        AdjList[u].push_back(v); // Thêm cạnh từ u đến v
    }
    BFS(s, t);
    if (found)
    {
        for (int v : paths[t])
            cout << v << " ";
    }
    else
        cout << -1;
    return 0;
}
