//14.1
#include <stdio.h>

int main() {
    int n, m, i, j;
    scanf("%d%d", &n, &m);

    int mat[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // tính t?ng các ph?n t? trên t?ng hàng
    for (i = 0; i < n; i++) {
        long long row_sum = 0;
        for (j = 0; j < m; j++) {
            row_sum += mat[i][j];
        }
        printf("%lld ", row_sum);
    }
    printf("\n");

    // tính t?ng các ph?n t? trên t?ng c?t
    for (j = 0; j < m; j++) {
        long long col_sum = 0;
        for (i = 0; i < n; i++) {
            col_sum += mat[i][j];
        }
        printf("%lld ", col_sum);
    }
    printf("\n");

    return 0;
}

