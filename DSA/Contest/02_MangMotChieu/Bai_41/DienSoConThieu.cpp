#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int min = arr[0];
    int max = arr[n - 1];
    int count = 0;
    int idx = min;
    while (idx <= max)
    {
        vector<int>:: iterator pos = find(arr.begin(), arr.end(), idx);
        if (pos == arr.end())
            count++;
        idx++;
    }
    cout << count;
    return 0;
}
