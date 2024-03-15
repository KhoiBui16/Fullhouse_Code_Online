#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long> city(n);
    for (long& it : city)
        cin >> it;
    
    sort(city.begin(), city.end());

    long minDistance = 1e9 + 7;
    int countCity = 0;

    for (int i = 1; i < n; i++)
    {
        if (city[i] - city[i - 1] < minDistance)
            minDistance = city[i] - city[i - 1];
    }

    for (int i = 1; i < n; i++)
    {
        if ((city[i] - city[i - 1]) == minDistance)
            countCity++;        
    }

    cout << minDistance << " " << countCity;
    return 0;
}