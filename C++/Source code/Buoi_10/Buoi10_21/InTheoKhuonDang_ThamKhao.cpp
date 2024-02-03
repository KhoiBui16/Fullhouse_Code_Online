#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a, a + n);
    int l = 0, r = n-1;
    int b[n];
    for (int i=0; i<n; i+=2)
    {
        b[i] = a[r];
        b[i+1] = a[l];
        l++; r--;
    }
    for (int i=0; i<n; i++)
    {
        cout << b[i] << " ";
    }
}