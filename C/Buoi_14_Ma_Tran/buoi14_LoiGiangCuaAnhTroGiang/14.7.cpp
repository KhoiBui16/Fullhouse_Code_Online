#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int res = -1e9, hang, cot;
    for (int i = 0; i < n; ++i)
    {
        int sum = 0;
        for (int j = 0; j < m; ++j)
            sum += a[i][j];
        if (res < sum)
        {
            res = sum;
            hang = i;
        }
    }
    res = -1e9;
    for (int i = 0; i < m; ++i)
    {
        int sum = 0;
        for (int j = 0; j < n; ++j)
            sum += a[j][i];
        if (res < sum)
        {
            res = sum;
            cot = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i != hang)
        {
            for (int j = 0; j < m; ++j)
            {
                if (j != cot)
                {
                    printf("%d ", a[i][j]);
                }
            }
            printf("\n");
        }
    }
}