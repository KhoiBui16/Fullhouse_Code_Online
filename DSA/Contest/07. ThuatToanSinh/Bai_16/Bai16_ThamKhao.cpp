#include <bits/stdc++.h>

using namespace std;

int n, k;
vector <vector<int>> a(101, vector<int>(101));
vector <int> b(1001);
int main()
{
    cin >> n >> k;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            cin >> a[i][j];
    for (int i=1; i<=n; i++) b[i] = i;
    vector <vector<int>> v;
    do
    {
        int sum = 0;
        for (int i=1; i<=n; i++) sum += a[i][b[i]];
        if (sum == k)
        {
            vector<int> tmp(b.begin()+1, b.begin()+n+1);
            v.push_back(tmp);
        }
    } while (next_permutation(b.begin()+1, b.begin()+n+1));
    cout << v.size() << endl;
    for (vector <int> it: v)
    {
        for (auto x: it) cout << x << " ";
        cout << endl;
    }
}