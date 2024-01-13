//20.7
#include <stdio.h>
#include <string.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    char s[1001];
    scanf("%s", s);
    int sum = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            if (!isPrime(digit)) {
                printf("NO\n");
                return 0;
            }
            sum += digit;
        }
    }
    if (isPrime(sum)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

