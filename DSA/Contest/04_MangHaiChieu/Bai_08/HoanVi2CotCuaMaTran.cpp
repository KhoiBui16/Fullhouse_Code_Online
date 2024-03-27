#include <iostream>
#define MAX 200
using namespace std;


void NhapMaTran(long a[][MAX], int& n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}


void HoanVi2Cot(long a[][MAX], int n, int c1, int c2)
{
    for (int i = 0; i < n; i++)
        swap(a[i][c1 - 1], a[i][c2 - 1]);

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
    HoanVi2Cot(a, n, u, v);
    return 0;
}
