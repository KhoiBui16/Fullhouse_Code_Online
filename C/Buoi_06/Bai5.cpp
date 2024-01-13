#include <stdio.h>
#include <math.h>

void analysisPrime(long long n){
	for (int i = 2; i <= sqrt(n); ++i){
		if(!(n % i)){
			int cnt = 0;
			while(!(n % i)){
				++cnt;
				n /= i;
			}
			printf("%d^%d",i,cnt);
			if(n != 1)
				printf(" * ");
		}
	}
	// n co the la snt nen%lld
	if(n != 1)
		printf("%lld^%d",n,1);
}

int main(){
	long long n;
	scanf("%lld",&n);
	analysisPrime(n);
}
