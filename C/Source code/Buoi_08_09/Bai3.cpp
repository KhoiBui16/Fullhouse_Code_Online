#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int is_fibonacci(int n) {
    long long a = 1ll* 5 * n * n + 4;
    long long b = 1ll* 5 * n * n - 4;
    long long sqa = sqrt(a);
    long long sqb = sqrt(b);
    // sqrt(5*n^2 + 4) ho?c sqrt(5*n^2 - 4) la so nguyen
    return sqa * sqa == a || sqb * sqb == b;
}


int digit_sum(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    int n;
    scanf("%d", &n);

	for(int i = 2; i <= n; ++i){
		if(is_fibonacci(digit_sum(i)) && is_prime(i))
			printf("%d ",i);
	}
    return 0;
}

