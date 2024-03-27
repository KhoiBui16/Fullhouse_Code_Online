#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int main()
{
    int n;
    cin >> n;
    int matrix[MAX][MAX];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            for (int j = 0; j < n; j++)
                cout << matrix[i][j] << " ";
        else
            for (int j = n - 1; j >= 0; j--)
                cout << matrix[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}