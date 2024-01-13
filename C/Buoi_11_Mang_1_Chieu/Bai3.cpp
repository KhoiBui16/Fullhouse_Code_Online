//11.3
#include <stdio.h>

// Hàm d?o ngu?c m?t s?
int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

// Hàm ki?m tra m?t s? có ph?i s? thu?n ngh?ch hay không
int isPalindrome(int n) {
    return n == reverseNumber(n);
}

int main() {
    int n, i, count = 0;
    scanf("%d", &n);
    int a[n], palindromes[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (isPalindrome(a[i])) {
            palindromes[count++] = a[i];
        }
    }
    printf("%d\n", count);
    for (i = 0; i < count; i++) {
        printf("%d ", palindromes[i]);
    }
    return 0;
}

