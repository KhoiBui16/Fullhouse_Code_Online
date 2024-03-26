#include <bits/stdc++.h>
using namespace std;

long long sum2(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return sum2(n - 1) + n * n;
}

int main()
{
    int n;
    cin >> n;
    long long result = sum2(n);
    cout << result;
    return 0;
}