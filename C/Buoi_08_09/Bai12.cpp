//8.12
#include <stdio.h>
#include <math.h>

// Hàm ki?m tra xem m?t s? có ph?i là s? nguyên t? hay không
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

// Hàm tính t?ng các ch? s? c?a m?t s?
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Hàm ki?m tra xem m?t s? có n?m trong dãy Fibonacci hay không
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

