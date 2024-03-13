#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (ll& it : arr)
        cin >> it;
    
    ll minPrice = 0, maxPrice = 0;
    minPrice = arr[1] - arr[0];
    maxPrice = arr[n - 1] - arr[0];
    cout << minPrice << " " << maxPrice << endl;
    for (int i = 1; i < n - 1; i++)
    {
        minPrice = min((arr[i] - arr[i - 1]), arr[i + 1] - arr[i]);
        maxPrice = max((arr[n - 1] - arr[i]), arr[i] - arr[0]);
        cout << minPrice << " " << maxPrice << endl;
    }

    minPrice = arr[n - 1] - arr[n - 2];
    maxPrice = arr[n - 1] - arr[0];
    cout << minPrice << " " << maxPrice << endl;
    return 0;
}