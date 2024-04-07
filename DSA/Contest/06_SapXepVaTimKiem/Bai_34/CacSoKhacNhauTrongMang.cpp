#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<long> se;
    for (int i = 0; i < n; i++)
    {
        long x;
        cin >> x;
        se.insert(x);
    }
    cout << se.size();
    return 0;
}