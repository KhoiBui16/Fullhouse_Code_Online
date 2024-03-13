#include <bits/stdc++.h>
using namespace std;

void SelectionSort(vector<long> arr, int n)
{
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cnt++;
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(arr[i], arr[min_idx]);
        cout << "Buoc " << cnt << ": ";
        for (long x : arr)
            cout << x << " ";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<long> arr(n);
    for(long& x :arr)
        cin >> x;
    SelectionSort(arr, n);
    return 0;
}