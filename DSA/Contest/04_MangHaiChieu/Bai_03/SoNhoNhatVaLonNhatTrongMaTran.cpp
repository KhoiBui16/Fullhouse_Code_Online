# include <iostream>
# define MAX 200
using namespace std;

void EnterMatrix (long a[][MAX], int& n, int& m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}


void ExportOutput (long a[][MAX], int n, int m)
{
    long max = -1e9;
    long min = 1e9;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }
    }
    cout << min << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] == min)
                cout << i + 1 << " " << j + 1 << endl;
    cout << max << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] == max)
                cout << i + 1 << " " << j + 1 << endl;
}

int main() 
{
    int n, m;
    cin >> n >> m;
    long a[MAX][MAX];
    EnterMatrix(a, n, m);
    ExportOutput(a, n, m);
    
    return 0;
}