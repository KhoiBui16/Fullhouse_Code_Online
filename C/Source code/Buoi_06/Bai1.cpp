#include <stdio.h>
#include <math.h>

long long sum_of_divisors(long long n) {
    // T�nh can b?c hai c?a n
    long long sqrt_n = sqrt(n);
    
    // Kh?i t?o t?ng c�c u?c l� 1 (do 1 lu�n l� u?c c?a n)
    long long sum_divisors = 0;
    
    // Duy?t qua c�c u?c t? 2 d?n can b?c hai c?a n
    for (long long i = 1; i <= sqrt_n; ++i) {
        if (!(n % i)) {
            // N?u i l� u?c c?a n, c?ng i v� n/i v�o t?ng c�c u?c
            sum_divisors += i + n / i;
        }
    }
    
    // N?u can b?c hai c?a n l� m?t u?c c?a n, c?ng can b?c hai v�o t?ng c�c u?c
    if (sqrt_n * sqrt_n == n) {
        sum_divisors -= sqrt_n;
    }
    
    // Tr? v? t?ng c�c u?c c?a n
    return sum_divisors ;
}

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%lld", sum_of_divisors(n));
    return 0;
}



