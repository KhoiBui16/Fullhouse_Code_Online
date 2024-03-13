#include <bits/stdc++.h>
#define ll long long
using namespace std;

long count(vector<int> arr, int n, int k)
{
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if ((arr[i] + arr[j]) == k)
                cnt++;
    return cnt;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int& it : arr)
        cin >> it;
    long cnt = count(arr, n, k);
    cout << cnt;

    return 0;
}