#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[101][101];
    int min = 1e3, max = -1e3;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    int hang, cot;
    printf("\n%d", min);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (min == a[i][j])
            {
                hang = i;
                cot = j;
                printf("\n%d %d", hang, cot);
            }
        }
    }
    printf("\n%d", max);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (max == a[i][j])
            {
                hang = i;
                cot = j;
                printf("\n%d %d", hang, cot);
            }
        }
    }
}