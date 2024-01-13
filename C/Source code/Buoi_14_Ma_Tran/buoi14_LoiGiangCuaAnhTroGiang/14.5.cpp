#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 5][n + 5];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}