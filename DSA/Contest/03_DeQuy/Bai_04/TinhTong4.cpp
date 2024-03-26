#include <bits/stdc++.h>
using namespace std;

long long sum4(int n)
{
    if (n == 0 || n == 1)
        return -1;
    return sum4(n - 1) + pow(-1, n) * n;
} 

int main()
{
    int n;
    cin >> n;
    long long result = sum4(n);
    cout << result;
    return 0;
}