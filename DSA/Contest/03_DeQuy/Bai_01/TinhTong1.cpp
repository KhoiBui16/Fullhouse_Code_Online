#include <bits/stdc++.h>
using namespace std;

long long sum1(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return sum1(n - 1) + n;
}

int main()
{
    int n;
    cin >> n;
    long long result = sum1(n);
    cout << result;
    return 0;
}