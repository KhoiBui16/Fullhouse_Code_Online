#include <bits/stdc++.h>
using namespace std;

struct EDGE
{
    int u, v, weight;
};

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> WeightAdjMatrix(n + 1, vector<int>(n + 1));
    vector<EDGE> EdgeList;
    // vector<vector<int>> edges (n + 1, vector<vector<int>>(n + 1, vector<int> (n + 1)))
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> WeightAdjMatrix[i][j];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (WeightAdjMatrix[i][j] != 0 && i < j)
            {
                EDGE tmp;
                tmp.u = i;
                tmp.v = j;
                tmp.weight = WeightAdjMatrix[i][j];
                EdgeList.push_back(tmp);
            }
        }
    }
    for (int i = 0; i < EdgeList.size(); i++)
        cout << EdgeList[i].u << " " << EdgeList[i].v << " " << EdgeList[i].weight << endl;
    return 0;
}