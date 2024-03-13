#include <bits/stdc++.h>
#define ll long long
using namespace std;

long gcd(long a, long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int n;
    cin >> n;
    vector <long> arr(n);
    for(long& it : arr)
        cin >> it;

    long count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (gcd(arr[i], arr[j]) == 1)
                count++;
    cout << count;

    return 0;
}