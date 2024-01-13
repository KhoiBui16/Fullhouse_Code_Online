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
    printf("\n");
    for (int i = n; i > 0; i--)
    {
        for (int j = n; j > 0; j--)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}