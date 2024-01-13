//15.5
#include <stdio.h>

// Hàm s?p x?p m?t m?ng tang d?n
void sort(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];

    // Nh?p ma tr?n
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // S?p x?p t?ng hàng c?a ma tr?n
    for (int i = 0; i < n; i++) {
        sort(matrix[i], n);
    }

    // In ma tr?n sau khi s?p x?p
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

