#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a, b;
    cin >> a >> b;

    long CanA = sqrt(a);
    long CanB = sqrt(b);
    if (CanA * CanA != a)
        CanA += 1;
    cout << (CanB - CanA + 1);
    return 0;
}