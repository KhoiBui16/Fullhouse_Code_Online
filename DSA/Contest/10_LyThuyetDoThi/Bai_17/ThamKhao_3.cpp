#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<vector<int>> AdjList;
vector<int> visited;
vector<int> parent;
vector<int> res;
bool found;

void BFS(int u, int v)
{
    queue<int> q;
    q.push(u);
    visited[u] = 1;
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
                parent[neighbor] = x; // Lưu lại đỉnh cha của neighbor
            }
        }
    }
}

void reconstructPath(int start, int end)
{
    for (int at = end; at != start; at = parent[at])
    {
        res.push_back(at);
    }
    res.push_back(start);
    reverse(res.begin(), res.end());
}

int main()
{
    cin >> n >> m >> s >> t;
    AdjList.resize(n + 1);
    visited.resize(n + 1, 0);
    parent.resize(n + 1, -1); // Khởi tạo mảng parent với giá trị -1 (không có đỉnh cha)
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u); // Đồ thị vô hướng
    }
    BFS(s, t);
    if (found)
    {
        reconstructPath(s, t);
        for (int v : res)
            cout << v << " ";
    }
    else
        cout << -1;
    return 0;
}
