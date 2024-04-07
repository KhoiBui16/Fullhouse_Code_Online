#include <bits/stdc++.h>
using namespace std;

long minStep2(vector<int> arr, int n, int d)
{
    long min_step = 0;
    for (int i = 1; i < n; i++)
    {
        int step = 0;
        if (arr[i] <= arr[i - 1])
        {
            int distance = (arr[i - 1] - arr[i] + 1);
            if (distance % d == 0)
                step = distance / d;
            else
                step = distance / d + 1;
            arr[i] += step * d;
        }
        min_step += step;
    }

    return min_step;
}

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long result = minStep2(arr, n, d);
    cout << result;
    return 0;
}