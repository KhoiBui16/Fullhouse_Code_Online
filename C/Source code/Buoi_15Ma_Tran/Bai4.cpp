//15.4
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j || i + j == n - 1) { // Ki?m tra n?m trên du?ng chéo chính ho?c ph?
                if (isPrime(matrix[i][j])) {
                    count++;
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}

