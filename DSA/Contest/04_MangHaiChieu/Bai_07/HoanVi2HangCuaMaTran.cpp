#include <iostream>
#define MAX 200
using namespace std;

void NhapMaTran(long a[][MAX], int& n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}

void HoanVi2Hang(long a[][MAX], int n, int r1, int r2)
{
    for (int j = 0; j < n; j++)
        swap(a[r1 - 1][j], a[r2 - 1][j]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    long a[MAX][MAX];
    NhapMaTran(a, n);
    int u, v;
    cin >> u >> v;
    HoanVi2Hang(a, n, u, v);
    return 0;
}

