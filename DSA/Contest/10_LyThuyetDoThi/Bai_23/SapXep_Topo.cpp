#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void DFS(int u, vector<vector<int>>& adjList, vector<bool>& visited, vector<int>& topo)
{
    visited[u] = true;
    for (int v : adjList[u])
        if (!visited[v])
            DFS(v, adjList, visited, topo);
    // dinh khi tham xong dau tien -> het goi de quy -> cho vao topo
    topo.push_back(u);
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adjList(n + 1);
    vector<bool> visited(n + 1, false);
    vector<int> topo;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
    }
    for (int i = 0; i < n; i++)
        sort(adjList[i].begin(), adjList[i].end());
    // tham tat ca cac dinh vi co nhieu thanh phan lien thong nen se co nhieu thu tu topo khac nhau
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
            DFS(i, adjList, visited, topo);
    }

    if (!topo.empty())
        cout << 0;
    else
        cout << 1;

    /*  
    //* thu tu topo se duoc tim thay sau khi lat nguoc lai mang
    reverse(topo.begin(), topo.end());
    for (int it : topo)
        cout << it << " "; 
    */

    return 0;
}