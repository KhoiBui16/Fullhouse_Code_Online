#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> EdgeList;
    //vector<vector<int>> matrix(n + 1, vector<int>(n + 1, 0));
    vector<vector<int>> AdjMatrix;
    AdjMatrix = vector<vector<int>> (n + 1, vector<int> (n + 1, 0));
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        EdgeList.push_back({u, v});
        AdjMatrix[u][v] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << AdjMatrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}