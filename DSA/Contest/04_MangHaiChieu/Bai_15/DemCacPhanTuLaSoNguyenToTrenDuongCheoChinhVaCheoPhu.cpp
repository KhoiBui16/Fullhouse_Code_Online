#include <bits/stdc++.h>
#define MAX 200
using namespace std;

bool isPrimeNum(long n)
{
    if (n < 2)
        return false;
    for (long i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int SlSoNToCheoChinhVaCheoPhu(long a[][MAX], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (isPrimeNum(a[i][i]) == true)
            ++cnt;
    for (int i = 0; i < n; i++)
        if (isPrimeNum(a[i][n - i - 1]) == true)
            ++cnt;
    if (n % 2 != 0)
        if (isPrimeNum(a[n / 2 - 1][n / 2 - 1]) == true)
            return cnt - 1;
    return cnt;
}
int main() 
{
    int n; 
    cin >> n;
    long a[MAX][MAX];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    int sl = SlSoNToCheoChinhVaCheoPhu(a, n);
    cout << sl;
    return 0;
}

