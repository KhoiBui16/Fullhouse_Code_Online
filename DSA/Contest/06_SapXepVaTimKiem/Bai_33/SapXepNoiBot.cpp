#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<long> arr, int n)
{
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cnt++;
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
            
        cout << "Buoc " << cnt << ": ";
        for (long& it : arr)
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
    BubbleSort(arr, n);
    return 0;
}