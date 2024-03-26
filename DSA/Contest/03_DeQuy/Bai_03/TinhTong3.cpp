#include <bits/stdc++.h>
using namespace std;

long long sum3(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return sum3(n - 1) + pow(n, 3);
}

int main()
{
    int n;
    cin >> n;
    long long result = sum3(n);
    cout << result;
    return 0;
}