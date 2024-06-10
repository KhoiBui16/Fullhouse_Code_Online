#include <bits/stdc++.h>
using namespace std;

int matrix[1001][1001];

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> EdgeList;
    
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >>v;
        EdgeList.push_back({u, v});
        matrix[u][v] = matrix[v][u] = 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}