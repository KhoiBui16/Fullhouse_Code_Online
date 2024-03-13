#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> arr(n);
    set<long> se;
    for (long& it : arr)
    {
        cin >> it;
        se.insert(it);
    }
    cout << se.size();
    return 0;
}