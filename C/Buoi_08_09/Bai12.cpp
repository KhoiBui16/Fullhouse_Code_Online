//8.12
#include <stdio.h>
#include <math.h>

// H�m ki?m tra xem m?t s? c� ph?i l� s? nguy�n t? hay kh�ng
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// H�m t�nh t?ng c�c ch? s? c?a m?t s?
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// H�m ki?m tra xem m?t s? c� n?m trong d�y Fibonacci hay kh�ng
int isInFibonacci(int n) {
    int a = 0, b = 1, c;
    while (b < n) {
        c = a + b;
        a = b;
        b = c;
    }
    return (b == n);
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 2; i < N; i++) {
        if (isPrime(i) && isInFibonacci(digitSum(i))) {
            printf("%d ", i);
        }
    }

    return 0;
}

