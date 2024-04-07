#include <bits/stdc++.h>
#define MAX_VALUE 100000
using namespace std;

int FirstValueIndex(int arr[], int n, int x)
{
    int left = 0, right = n - 1, pos = -1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] < x)
            left = mid + 1;
        else if (arr[mid] > x)
            right = mid - 1;
        else
        {
            pos = mid;
            right = mid - 1;
        }
    }
    return pos;
}

int LastValueIndex(int arr[], int n, int x)
{
    int left = 0, right = n - 1, pos = -1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] < x)
            left = mid + 1;
        else if (arr[mid] > x)
            right = mid - 1;
        else
        {
            pos = mid;
            left = mid + 1;
        }
    }
    return pos;
}

int FirstBiggerEqualThanValueIndex(int arr[], int n, int x)
{
    int left = 0, right = n - 1, pos = -1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] >= x)
        {
            pos = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return pos;
}

int biggerThanValueFirstIndex(int arr[], int n, int x)
{
    int left = 0, right = n - 1, pos = -1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] > x)
        {
            pos = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return pos;
}

int frequency(int firstPos, int lastPos)
{
    int count = lastPos - firstPos + 1;
    return count;
}

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int pos1 = FirstValueIndex(arr, n, x);
    cout << pos1 << endl;
    int pos2 = LastValueIndex(arr, n, x);
    cout << pos2 << endl;
    int pos3 = FirstBiggerEqualThanValueIndex(arr, n, x);
    cout << pos3 << endl;
    int pos4 = biggerThanValueFirstIndex(arr, n, x);
    cout << pos4 << endl;
    int freq = frequency(pos1, pos2);
    if (pos1 != -1)
        cout << freq;
    else
        cout << 0;
    return 0;
}