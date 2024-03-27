#include <iostream>
#define MAX 100
using namespace std;

void NhapMaTran(long a[][MAX], int& n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}

void InMaTranTheoMau(long a[][MAX], int n)
{
    cout << "Hinh 1:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }
    cout << "Hinh 2:\n";
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
            cout << a[i][j] << " ";
        cout << endl;
    }

    cout << "Hinh 3:\n";
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }

    cout << "Hinh 4:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
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
    InMaTranTheoMau(a, n);

    return 0;
}

