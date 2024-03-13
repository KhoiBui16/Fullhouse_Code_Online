#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll SumOfElements(vector<int> arr, int n)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        sum %= MOD;
    }
    return sum;
}

ll MultiOfElements(vector<int> arr, int n)
{
    ll multi = 1;
    for (int i = 0; i < n; i++)
    {
        multi *= arr[i];
        multi %= MOD;
    }
    return multi;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& it : arr)
        cin >> it;
    ll sum = SumOfElements(arr, n);
    ll multi = MultiOfElements(arr, n);
    cout << sum << "\n" << multi;
    return 0;
}