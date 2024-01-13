//8.9
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

bool isPerfectNumber(long long n) {
	int i = 2;
	long long check = pow(2,i-1) * (pow(2,i) - 1);
	while(check < n){
		++i;
		check = pow(2,i-1) * (pow(2,i) - 1);
	}
	return (check == n && is_prime(i) && is_prime(pow(2,i)-1));
}

int main() {
    long long n;
    scanf("%lld", &n);
    if (isPerfectNumber(n)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

