#include <stdio.h>
int nhap(int a[][200], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
int snt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[200][200];
    nhap(a, n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (snt(a[i][i]))
            ++cnt;
        if (snt(a[i][n - i - 1]) && (i != n - i - 1))
            ++cnt;
    }
    printf("%d", cnt);
}