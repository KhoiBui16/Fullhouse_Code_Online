#include <bits/stdc++.h>
using namespace std;
using ll = long long;


long convertToMin(long n)
{
    long res = 0;
    ll power = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 6)
            res += 5 * power;
        else
            res += digit * power;
        power *= 10;
        n /= 10;
    }
    return res;
}

long convertToMax(long n)
{
    long res = 0;
    ll power = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 5)
            res += 6 * power;
        else
            res += digit * power;
        power *= 10;
        n /= 10;
    }
    return res;
}

void solve()
{
    long a, b;
    cin >> a >> b;
    ll minSum = convertToMin(a) + convertToMin(b);
    ll maxSum = convertToMax(a) + convertToMax(b);
    cout << minSum << " " << maxSum;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}