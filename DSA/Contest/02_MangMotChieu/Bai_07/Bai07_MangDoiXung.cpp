#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool IsPalindromeArray(vector<int> arr, int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (arr[left] != arr[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& it : arr)
        cin >> it;

    if (IsPalindromeArray(arr, n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}