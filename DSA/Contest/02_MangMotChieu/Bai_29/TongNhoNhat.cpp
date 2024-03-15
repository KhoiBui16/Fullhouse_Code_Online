#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long sum1 = 0;
    long sum2 = 0;
    long minSum = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            sum2 = sum2 * 10 + arr[i];
        else
            sum1 = sum1 * 10 + arr[i];
    }
    minSum = sum1 + sum2;
    cout << minSum;
    return 0;
}