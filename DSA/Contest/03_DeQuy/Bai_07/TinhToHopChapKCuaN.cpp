#include <bits/stdc++.h>
using namespace std;

long long nCk(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    return nCk(n - 1, k - 1)  + nCk(n - 1, k);
} 

int main()
{
    int n, k;
    cin >> n >> k;
    long long result = nCk(n, k);
    cout << result;
    return 0;
}