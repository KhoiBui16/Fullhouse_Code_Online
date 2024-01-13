//14.16
#include <stdio.h>
#include <math.h>

// Ki?m tra m?t s? có ph?i s? nguyên t? hay không
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n];
    // Nh?p ma tr?n A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    // Tính t?ng các ph?n t? là s? nguyên t? thu?c tam giác trên
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPrime(a[i][j])) {
                sum += a[i][j];
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}

