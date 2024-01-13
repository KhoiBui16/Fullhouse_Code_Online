//3.16
#include <stdio.h>

int main(){
	long long n;
	long long cnt = 0;
	scanf("%lld",&n);
	for (long long i = 5; i <= n; i *= 5){
		cnt += n/i;
	}
	printf("%lld",cnt);
}


