#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<pair<int, int>> EdgeList;
    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
        {
            if (stoi(tmp) > i)
                EdgeList.push_back({i, stoi(tmp)});
        }
    }
    for (pair<int, int> edge : EdgeList)
        cout << edge.first << " " << edge.second << endl;
    return 0;
}