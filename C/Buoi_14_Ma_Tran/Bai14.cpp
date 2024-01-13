//14.14
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m], b[n][m];

    // Ð?c giá tr? ma tr?n A t? input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Ð?c giá tr? ma tr?n B t? input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Tính t?ng c?a hai ma tr?n
    long long c[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // In ra ma tr?n t?ng
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%lld ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

