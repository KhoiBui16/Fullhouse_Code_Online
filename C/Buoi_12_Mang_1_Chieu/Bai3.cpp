//12.3
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void printPrimeNumbers(int n) {
    // t?o m?ng d�nh d?u, ban d?u t?t c? d?u l� s? nguy�n t?
    bool isPrime[n+1];
    memset(isPrime, true, sizeof(isPrime));
//    for (int i = 0; i <= n; i++) {
//        isPrime[i] = true;
//    }
	
    // d�nh d?u c�c b?i c?a c�c s? nguy�n t?
    for (int i = 2; i*i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i*i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // in ra c�c s? nguy�n t?
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printPrimeNumbers(n);
    return 0;
}

