#include <stdio.h>
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

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
    int u, v;
    scanf("%d%d", &u, &v);
    for (int j = 1; j <= n; j++)
    {
        swap(&a[u][j], &a[v][j]);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}