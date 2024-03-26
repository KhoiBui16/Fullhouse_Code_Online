#include <bits/stdc++.h>
using namespace std;

bool KtDoiXung(int arr[], int left, int right)
{
    if (left < right)
    {
        if (arr[left] != arr[right])
            return false;
        return KtDoiXung(arr, left + 1, right - 1);
    }   
    return true;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (KtDoiXung(arr, 0, n - 1))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}