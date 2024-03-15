#include <bits/stdc++.h>
using namespace std;

void MergeTwoArray(vector<long> a, vector<long> b, vector<long>& merge, int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            merge.push_back(a[i]);
            i++;
        }
        else
        {
            merge.push_back(b[j]);
            j++;
        }
    }

    while (i < n)
    {
        merge.push_back(a[i]);
        i++;
    }

    while (j < m)
    {
        merge.push_back(b[j]);
        j++;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<long> arr(n);
    vector<long> brr(m);
    vector<long> merge;
    
    for (long& it : arr)
        cin >> it;
    for (long& it : brr)
        cin >> it;
    
    MergeTwoArray(arr, brr, merge, n, m);

    for (long it : merge)
        cout << it << " ";

    return 0;
}