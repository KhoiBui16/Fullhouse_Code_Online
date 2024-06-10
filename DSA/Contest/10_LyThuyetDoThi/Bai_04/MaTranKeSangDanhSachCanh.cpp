#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> AdjMatrix (n + 1, vector<int>(n + 1, 0));
    vector<pair<int, int>> AdjList;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> AdjMatrix[i][j];
            if (AdjMatrix[i][j] == 1 && i < j)
                AdjList.push_back({i, j});
        }
    }

    for (vector<pair<int, int>>::size_type i = 0; i < AdjList.size(); i++)
        cout << AdjList[i].first << " " << AdjList[i].second << endl;
    return 0;
}