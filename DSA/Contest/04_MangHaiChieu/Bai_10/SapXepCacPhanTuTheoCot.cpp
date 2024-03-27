#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;

int main()
{
    int n;;
    cin >> n;
    int a[MAX][MAX];
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int x[MAX][MAX];
    
    for (int i = n - 1; i >= 0; i--)
        for (int j = n - 1; j >= 0; j--)
            x[i][j] = a[j][i];

    for (int i = 0; i < n; i++)
        sort(x[i] + 0, x[i] + n); 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << x[j][i] << " ";
        cout << endl;
    }

    return 0;
}