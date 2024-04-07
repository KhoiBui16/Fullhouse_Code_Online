#include <bits/stdc++.h>
using namespace std;

void SelectionSort(long arr[], int n)
{
    int step = 0;
    for (int i = 0; i < n - 1; i++)
    {
        step++;
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
        cout << "Buoc " << step << ": ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    long arr[n];
    for (long& it : arr)
        cin >> it;
    SelectionSort(arr, n);
    return 0;
}