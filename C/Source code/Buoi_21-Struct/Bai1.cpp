#include <stdio.h>

struct fraction{
	long long numarator, dinominator;
};

long long GCD(long long a, long long b){
	if(!b) return a;
	return GCD(b, a % b);
}

int main(){
	struct fraction frac;
	scanf("%lld%lld",&frac.numarator, &frac.dinominator);
	
	long long gcd = GCD(frac.numarator, frac.dinominator);
	
	frac.numarator /= gcd;
	frac.dinominator /= gcd;
	
	printf("%lld/%lld", frac.numarator, frac.dinominator);
}
