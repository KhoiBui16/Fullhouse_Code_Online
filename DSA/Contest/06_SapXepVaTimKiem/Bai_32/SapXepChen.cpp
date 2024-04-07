#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<long> arr, int n)
{
    int cnt = 1;
    cout << "Buoc 1: ";
    for (long it : arr)
        cout << it << " ";
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        cnt++;
        long key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        cout << "Buoc " << cnt << ": ";
        for (long it : arr)
            cout << it << " ";
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
    InsertionSort(arr, n);
    return 0;
}