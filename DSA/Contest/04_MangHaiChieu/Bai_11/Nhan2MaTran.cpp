#define MAX 100
#include <iostream>
using namespace std;

void EnterArr(long MatrixA[][MAX], long MatrixB[][MAX], int& n, int& m, int& p)
{
    cin >> n >> m >> p;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> MatrixA[i][j];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            cin >> MatrixB[i][j];
}

void MultiArr(long MatrixA[][MAX], long MatrixB[][MAX], int n, int m, int p)
{
    long Multi[MAX][MAX];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            Multi [i][j] = 0;
            for (int h = 0; h < m; h++)
                Multi[i][j] += MatrixA[i][h] * MatrixB[h][j];
            cout << Multi[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, m, p;
    long MatrixA[MAX][MAX], MatrixB[MAX][MAX];
    EnterArr(MatrixA, MatrixB, n, m, p);
    MultiArr(MatrixA, MatrixB, n, m, p);

    return 0;
}

