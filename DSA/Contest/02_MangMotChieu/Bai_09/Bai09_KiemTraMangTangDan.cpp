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

    bool check = true;
    for (int i = 0; i < n - 1; i++)
        if (arr[i] >= arr[i + 1])
        {
            check = false;
            break;
        }

    if (check == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}