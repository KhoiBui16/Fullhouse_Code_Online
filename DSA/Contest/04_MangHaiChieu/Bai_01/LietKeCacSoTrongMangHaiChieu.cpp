#include <bits/stdc++.h>
using namespace std;

bool IsPrime(long n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    long matrix[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (IsPrime(matrix[i][j]))
                cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}