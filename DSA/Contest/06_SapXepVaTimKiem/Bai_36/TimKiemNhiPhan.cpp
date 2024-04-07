#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<long> arr, int n, long x)
{
    int Left = 0, Right = n - 1;
    while (Left <= Right)
    {
        int Mid = Left + (Right - Left) / 2;
        if (arr[Mid] > x)
            Right = Mid - 1;
        else if (arr[Mid] < x)
            Left = Mid + 1;
        else
            return Mid;
    }
    return - 1;
}

int main()
{
    int n;
    cin >> n;
    vector<long> arr(n);
    for (long& it : arr)
    cin >> it;
    int test;
    cin >> test;

    while(test--)
    {
        long x;
        cin >> x;
        if (BinarySearch(arr, n, x) != -1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}