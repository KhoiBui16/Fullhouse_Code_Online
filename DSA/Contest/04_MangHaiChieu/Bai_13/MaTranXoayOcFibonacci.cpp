#include <iostream>
#define MAX 100
using namespace std;

long long fibo[MAX];

void Fibo()
{
    fibo[0] = 0, fibo[1] = 1;
    for (int i = 2; i <= 92; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
}

int main()
{
    int n;
    cin >> n;
    long long a[MAX][MAX];
    Fibo();

    int sr = 0, er = n - 1, sc = 0, ec = n - 1;
    int f = 0;
    while (sr <= er && sc <= ec)
    {
        for (int j = sc; j <= ec; j++)
            a[sr][j] = fibo[f++];
        ++sr;

        for (int i = sr; i <= er; i++)
            a[i][ec] = fibo[f++];
        --ec;

        for (int j = ec; j >= sc; j--)
            a[er][j] = fibo[f++];
        --er;
            
        for (int i = er; i >= sr; i--)
            a[i][sc] = fibo[f++];
        ++sc;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}