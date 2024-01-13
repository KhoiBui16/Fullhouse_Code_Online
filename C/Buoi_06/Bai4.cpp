#include <stdio.h>
#include <math.h>

int checkPerfectSquare(long long n){
	int sqrt_n = sqrt(n);
	return sqrt_n == sqrt(n);
}

int main(){
	long long n;
	scanf("%lld",&n);
	if(checkPerfectSquare(n) == 1){
		printf("YES");
	}else{
		printf("NO");
	}
}
