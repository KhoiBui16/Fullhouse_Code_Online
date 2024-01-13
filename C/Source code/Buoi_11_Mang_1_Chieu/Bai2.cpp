//11.2
#include <stdio.h>

// Hàm ki?m tra xem m?t s? có ph?i s? Fibonacci hay không
int isFibonacci(long long n) {
    long long a = 0, b = 1, c;
    if(n == 0 || n == 1) return 1;
    while (b <= n) {
        c = a + b;
        a = b;
        b = c;
        if (b == n) return 1;
    }
    return 0;
}

int main() {
    int n, i;
    scanf("%d", &n);
    long long a[n];
    for (i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    int found = 0;
    for (i = 0; i < n; i++) {
        if (isFibonacci(a[i])) {
            printf("%lld ", a[i]);
            found = 1;
        }
    }
    if (!found) printf("NONE");
    return 0;
}

