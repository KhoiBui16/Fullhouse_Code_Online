//14.12
#include <stdio.h>

int main() {
    int n, u, v, temp;
    scanf("%d", &n);
    int matrix[n][n];

    // Ð?c ma tr?n t? input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Ð?c các hàng c?n hoán v? t? input
    scanf("%d %d", &u, &v);

    // Hoán v? các ph?n t? trên 2 hàng
    for (int j = 0; j < n; j++) {
        temp = matrix[u-1][j];
        matrix[u-1][j] = matrix[v-1][j];
        matrix[v-1][j] = temp;
    }

    // In ra ma tr?n dã du?c hoán v?
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

