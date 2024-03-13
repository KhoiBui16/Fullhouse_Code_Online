#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& it : arr)
        cin >> it;

    int pos = arr[0];
    for (int i = 0; i < n; i++)
        pos = gcd(pos, arr[i]);
    cout << pos;

    return 0;
}