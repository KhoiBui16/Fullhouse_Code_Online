#include <bits/stdc++.h>
using namespace std;

int BinarySearchLastIdx(int arr[], int n, int left ,int right, int x)
{
    int idx = -1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] < x)
        {
            idx = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
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
        int last = BinarySearchLastIdx(arr, n, i + 1, n - 1, res);
        if (last != -1)
        {
            count += last - (i + 1) + 1;
        }
    }

    return count;
}


int main()
{
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
/*  Cách 2:
long CountSumOfPair(int arr[], int n, int k)
{
    long count = 0;
    int left = 0, right = n - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum < k)
        {
            count += right - left;
            left++;
        }
        else
            right--;
    }
    return count;
}

*/
