//14.13
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

    // Ð?c các c?t c?n hoán v? t? input
    scanf("%d %d", &u, &v);

    // Hoán v? các ph?n t? trên 2 c?t
    for (int i = 0; i < n; i++) {
        temp = matrix[i][u-1];
        matrix[i][u-1] = matrix[i][v-1];
        matrix[i][v-1] = temp;
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

