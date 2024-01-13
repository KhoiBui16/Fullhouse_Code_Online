// 8.5
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(long long n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long long n;
    scanf("%lld", &n);
    for (int i = 1; i <= sqrt(n); i++) {
        if (is_prime(i)) {
            printf("%lld ", 1ll*i*i);
        }
    }
    return 0;
}

