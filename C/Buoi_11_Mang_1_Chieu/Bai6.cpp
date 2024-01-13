//11.06
#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long a[n];
    for (long long i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    long long count = 0;
    for (long long i = 0; i < n; i++) {
        if (sqrt(a[i]) == (int)sqrt(a[i])) {
            count++;
        }
    }
    printf("%lld\n", count);
	for (long long i = 0; i < n; i++) {
        if (sqrt(a[i]) == (int)sqrt(a[i])) {
            printf("%lld ",a[i]);
        }
    }
    return 0;
}

