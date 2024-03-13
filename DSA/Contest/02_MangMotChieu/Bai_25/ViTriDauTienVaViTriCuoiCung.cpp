#include <bits/stdc++.h>
using namespace std;

int FirstIdxOfElement(vector<long> arr, int n, long x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i + 1;
    return - 1;
}

int EndIdxOfElement(vector<long> arr, int n, long x)
{
    int lastIdx = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            lastIdx = i + 1;
    return lastIdx;
}

int main()
{
    int n;
    cin >> n;
    long x;
    cin >> x;
    vector<long> arr(n);
    for (long& it : arr)
        cin >> it;
    int firstIdx = FirstIdxOfElement(arr, n, x);
    int lastIdx = EndIdxOfElement(arr, n , x);
    if (FirstIdxOfElement(arr, n, x) != -1)
        cout << firstIdx << " " << lastIdx;
    else
        cout << -1;    

    return 0;
}