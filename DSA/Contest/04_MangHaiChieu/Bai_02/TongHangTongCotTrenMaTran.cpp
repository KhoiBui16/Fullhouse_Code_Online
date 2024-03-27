#include <bits/stdc++.h>
#define MAX 200
using namespace std;

long long SumRow(long matrix[][MAX], int m, int row)
{
    long long sum = 0;
    for (int j = 0; j < m; j++)
        sum += matrix[row][j];
    return sum;
}

long long SumCol(long matrix[][MAX], int n, int col)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += matrix[i][col];
    return sum;
}

int main()
{
    int n, m;
    cin >> n >> m;
    long matrix[MAX][MAX];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];
    
    for (int i = 0; i < n; i++)
        cout << SumRow(matrix, m, i) << " ";
    cout << endl;
    for (int j = 0; j < m; j++)
        cout << SumCol(matrix, n, j) << " ";
    return 0;
}