#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> arr(n);
    map<int, long> mp;
    for (long& it : arr)
    {
        cin >> it;
        mp[it]++;
    }

    for (pair<int, long> it : mp)
        cout << it.first << " " << it.second << endl;

    cout << endl;

    for (long it : arr)
    {
        if (mp[it] != 0)
        {
            cout << it << " " << mp[it] << endl;
            mp[it] = 0;
        }
    }

    return 0;
}