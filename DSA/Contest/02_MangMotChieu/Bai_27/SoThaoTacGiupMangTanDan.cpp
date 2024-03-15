#include <bits/stdc++.h>
using namespace std;

long minStep(vector<int> arr, int n)
{
    long step = 0;
    for (int i = 1; i < n; i++)
    {
        long step_temp = 0;
        if (arr[i] <= arr[i - 1])
        {
            step_temp = (arr[i - 1] - arr[i] + 1);
            arr[i] += step_temp;
        }
        step += step_temp;
    }
    return step;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& it : arr)
        cin >> it;
    long res = minStep(arr, n);
    cout << res;

    return 0;
}