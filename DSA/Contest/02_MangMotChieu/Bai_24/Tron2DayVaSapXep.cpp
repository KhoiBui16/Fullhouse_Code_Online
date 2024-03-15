#include <bits/stdc++.h>
using namespace std;

void MergeArrAndSort(vector<long> a, vector<long> b, vector<long>& merge, int n)
{
    int idx = 0;
    int i = 0;
    int j = 0;
    while (idx < 2 * n)
    {
        if (idx % 2 == 0)
            merge.push_back(a[i++]);
        else
            merge.push_back(b[j++]);
        idx++;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<long> arr(n), brr(n), mergeArr;

    for (long& it : arr)
        cin >> it;
    for (long& it : brr)
        cin >> it;

    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end(), greater<long>());

    MergeArrAndSort(arr, brr, mergeArr, n);
    for (long it : mergeArr)
        cout << it << " ";

    return 0;
}