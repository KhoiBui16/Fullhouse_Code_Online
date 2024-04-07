#include <bits/stdc++.h>
using namespace std;

int frequency[10000001];

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bool check = false;

    for (int i = 0; i < n; i++)
    {
        if (frequency[arr[i]] == 1)
        {
            cout << arr[i];
            check = true;
            break;
        }
        frequency[arr[i]] = 1;
    }

    if (!check)
        cout << -1;
}