#include <bits/stdc++.h>
using namespace std;


int BinarySearchFirstIdx(int arr[], int n, int left, int right, int x)
{
    int idx = -1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] > x)
        {
            idx = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return idx;
}

long CountSumOfPair(int arr[], int n, int k)
{
    long count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int res = k - arr[i];
        int first = BinarySearchFirstIdx(arr, n, i + 1, n - 1, res);
        if (first != -1)
        {
            count += ((n - 1) - first + 1);
        }
    }

    return count;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    long result = CountSumOfPair(arr, n, k);
    cout << result;
    return 0;
}