#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& it : arr)
        cin >> it;

    if ((ll)arr[0] * arr[1] < 0)
        cout << arr[0] << " ";
    for (int i = 1; i < n - 1; i++)
        if ((ll)arr[i] * arr[i + 1] < 0 || (ll)arr[i] * arr[i - 1] < 0)
            cout << arr[i] << " ";
    if ((ll)arr[n - 1] * arr[n - 2] < 0)
        cout << arr[n - 1];
    return 0;
}