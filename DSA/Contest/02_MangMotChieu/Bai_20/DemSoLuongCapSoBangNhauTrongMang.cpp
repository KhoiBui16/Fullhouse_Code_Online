#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long count = 0;
    map<long, long> TanSuat;
    for (int i = 0; i < n; i++)
    {
        count += TanSuat[arr[i]];
        TanSuat[arr[i]]++;
    }
    cout << count;
    return 0;
}