#include <bits/stdc++.h>
using namespace std;

int BinarySearch(long arr[], long value, int left, int right)
{
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] < value)
            return BinarySearch(arr, value, mid + 1, right);
        else if (arr[mid] > value)
            return BinarySearch(arr, value, left, mid - 1);
        else
            return mid;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int test;
    cin >> test;
    while (test--)
    {
        long x;
        cin >> x;
        int pos = BinarySearch(arr, x, 0, n - 1);
        if (pos != -1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}