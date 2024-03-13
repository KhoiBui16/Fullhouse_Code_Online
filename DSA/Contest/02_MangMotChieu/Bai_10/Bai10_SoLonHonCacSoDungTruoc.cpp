#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> arr(n);
    for (long& it : arr)
        cin >> it;

    int max = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
        {
            cout << arr[i] << " ";
            max = arr[i];
        }
    return 0;
}