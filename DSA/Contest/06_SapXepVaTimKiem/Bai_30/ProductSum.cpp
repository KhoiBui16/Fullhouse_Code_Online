#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
using namespace std;

ll ProductSum(vector<long> arr, int n)
{
    sort(arr.begin(), arr.end());
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] * i;
        sum %= MOD;
    }
    return sum % MOD;
}

int main()
{
    int n;
    cin >> n;
    vector<long> arr(n);
    for (long& it : arr)
        cin >> it;
    ll res = ProductSum(arr, n);
    cout << res;
    return 0;
}