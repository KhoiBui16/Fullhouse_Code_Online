#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll tron(int a[], int left, int mid, int right)
{
    ll temp[right + 1];
    int i = left, j = mid, k = left, cnt = 0;
    while (i < mid && j <= right)
    {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else //* truong hop a[i] > a[j]
        {
            temp[k++] = a[j++];
            cnt += mid - i;
        }
    }
    while (i < mid)
        temp[k++] = a[i++];
    while (j <= right)
        temp[k++] = a[j++];
    for (int x = left; x <= right; x++)
        a[x] = temp[x];
    return cnt;
}

ll DemNghichThe(int a[], int left, int right)
{
    ll dem = 0;
    if (left < right)
    {
        int mid = (left + right) / 2;
        dem += DemNghichThe(a, left, mid);
        dem += DemNghichThe(a, mid + 1, right);
        dem += tron(a, left, mid + 1, right);
    }
    return dem;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll SoCapNghichThe = DemNghichThe(a, 0, n - 1);
    cout << SoCapNghichThe;
    return 0;
}
