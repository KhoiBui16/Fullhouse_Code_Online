#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> arr(n);
    for (long& it : arr)
        cin >> it;
    int q;
    cin >> q;
    while(q--)
    {
        int left, right;
        cin >> left >> right;
        ll sum = 0;
        for (int i = left - 1; i < right; i++)
            sum += arr[i];
        cout << sum << endl;
    }
    return 0;
}