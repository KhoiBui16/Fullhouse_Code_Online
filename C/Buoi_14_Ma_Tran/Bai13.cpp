//14.13
#include <stdio.h>

int main() {
    int n, u, v, temp;
    scanf("%d", &n);
    int matrix[n][n];

    // �?c ma tr?n t? input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // �?c c�c c?t c?n ho�n v? t? input
    scanf("%d %d", &u, &v);

    // Ho�n v? c�c ph?n t? tr�n 2 c?t
    for (int i = 0; i < n; i++) {
        temp = matrix[i][u-1];
        matrix[i][u-1] = matrix[i][v-1];
        matrix[i][v-1] = temp;
    }

    // In ra ma tr?n d� du?c ho�n v?
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

