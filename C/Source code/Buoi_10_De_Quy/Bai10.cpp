//10.10
#include <stdio.h>

int sumDigit(long long n){
	if (n<10) return n;
	return n % 10 + sumDigit(n/10);
}

int main(){
	long long n;
	scanf("%lld",&n);
	printf("%d",sumDigit(n));
}

