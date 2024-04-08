#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<long,long> a, pair<long, long> b)
{
    return a.second < b.second;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<long, long>> films;
    for (int i = 0; i < n; i++)
    {
        long start, end;
        cin >> start >> end;
        films.push_back({start, end});

    }
    int count = 1;
    sort(films.begin(), films.end(), cmp);

    int tmp = films[0].second;
    for (vector<pair<long,long>>::size_type i = 1; i < films.size(); i++)
    {
        if (tmp <= films[i].first)
        {
            count++;
            tmp = films[i].second;
        }   
    }
    cout << count;
    return 0;
}