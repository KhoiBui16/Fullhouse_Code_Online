#include <bits/stdc++.h>
#define ll long long
using namespace std;

void MaxAndSecondMaxElements(vector<int> arr, int n)
{
    int max1 = arr[0];
    int max2 = arr[0];
    for (int it : arr)
    {
        if (it > max1)
        {
            max2 = max1;
            max1 = it;
        }
        else if (it <= max1 && it > max2)
            max2 = it;
    }

    cout << max1 << " " << max2;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& it : arr)
        cin >> it;
    
    MaxAndSecondMaxElements(arr, n);

    return 0;
}