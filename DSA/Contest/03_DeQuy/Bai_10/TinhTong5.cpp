#include <bits/stdc++.h>
using namespace std;

float sum5(long long n)
{
    if (n == 1)
        return 1;
    return sum5(n - 1) + (float)1 / n;
}

int main()
{
    int n;
    cin >> n;
    float result = sum5(n);
    cout << fixed << setprecision(3) << result;
    return 0;
}