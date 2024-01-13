#include <stdio.h>
void nhap(int a[][100], int n, int m)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
int main()
{
    int a[100][100], n, m;
    scanf("%d%d", &n, &m);
    nhap(a, n, m);
    for (int i = 0; i < n; ++i)
    {
        long long sum = 0;
        for (int j = 0; j < m; ++j)
        {
            sum += a[i][j];
        }
        printf("%lld ", sum);
    }
    printf("\n");
    for (int i = 0; i < m; ++i)
    {
        long long tum = 0;
        for (int j = 0; j < n; ++j)
        {
            tum += a[j][i];
        }
        printf("%lld ", tum);
    }
}