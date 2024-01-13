#include <stdio.h>
#include <math.h>
int check(int n)
{
    int n1 = n;
    int sum = 0;
    while (n1 > 0)
    {
        int tmp = n1 % 10;
        sum = sum * 10 + tmp;
        n1 /= 10;
    }
    if (sum == n)
        return 1;
    else
        return 0;
}
int main()
{
    int n, cnt = 0;
    ;
    scanf("%d", &n);
    int a[200][200];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            if (check(a[i][j]))
                ++cnt;
        }
    }
    printf("%d", cnt);
}