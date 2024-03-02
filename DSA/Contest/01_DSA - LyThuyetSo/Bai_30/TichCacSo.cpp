#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main()
{
    int n;
    cin >> n;
    long arr[n];
    for (long& it : arr)
        cin >> it;
    long long Multi = 1;
    for (long it : arr)
    {
        Multi *= it;
        Multi %= MOD;
    }
    cout << Multi;
    return 0;
}