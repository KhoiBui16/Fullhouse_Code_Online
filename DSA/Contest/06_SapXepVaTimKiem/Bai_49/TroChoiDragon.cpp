#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) { return a.first < b.first; }

int main()
{
    int n;
    cin >> n;
    long long s;
    cin >> s;
    vector<pair<int, int>> dragons;
    for (int i = 0; i < n; i++)
    {
        int xi, yi;
        cin >> xi >> yi;
        dragons.push_back({xi, yi});
    }
    sort(dragons.begin(), dragons.end(), cmp);
    bool checked = true;
    for (vector<pair<int, int>>::size_type i = 0; i < dragons.size(); i++)
    {
        if (s <= dragons[i].first)
        {
            checked = false;
            break;
        }
        else
        {
            s += dragons[i].second;
        }
    }

    if (checked)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}