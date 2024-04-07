#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> musicShow;
    for (int i = 0; i < n; i++)
    {
        int ai, bi;
        cin >> ai >> bi;
        musicShow.push_back({ai, bi});
    }
    sort(musicShow.begin(), musicShow.end(), compare);
    int count = 1;
    int solider = musicShow[0].second;
    for (int i = 1; i < n; i++)
    {
        if (musicShow[i].first > solider)
        {
            count++;
            solider = musicShow[i].second;
        }
    }
    cout << count;

    return 0;
}