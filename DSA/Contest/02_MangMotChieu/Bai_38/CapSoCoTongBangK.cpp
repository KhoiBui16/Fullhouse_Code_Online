#include <bits/stdc++.h>
using namespace std;

int BinarySearchFirstIdx(int arr[], int n, int left, int right, int x)
{
    int idx = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] > x)
            right = mid - 1;
        else if (arr[mid] < x)
            left = mid + 1;
        else
        {
            idx = mid;
            right = mid - 1;
        }
    }
    return idx;
}

int BinarySearchLastIdx(int arr[], int n, int left , int right, int x)
{
    int idx = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] > x)
            right = mid - 1;
        else if (arr[mid] < x)
            left = mid + 1;
        else
        {
            idx = mid;
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
        int last  = BinarySearchLastIdx(arr, n , i + 1, n - 1, res);
        if (first != -1)
            count += (last - first + 1);
    }

    return count;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    long result = countSumOfPair(arr, n, k);
    cout << result;

    return 0;
}

/*
    Cách 2 xài map
    #include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;
    int a[n];
    map<int, int> mp;

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) 
    {
        ans += mp[k - a[i]];

        if (a[i] * 2 == k) 
        {
            ans--;
        }
    }

    ans /= 2;

    cout << ans;

    return 0;
}

*/