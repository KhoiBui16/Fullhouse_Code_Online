//10.12
#include <stdio.h>

int countDigit(long long n){
	if (n<10) return 1;
	return 1+ countDigit(n/10);
}

int main(){
	long long n;
	scanf("%lld",&n);
	printf("%d",countDigit(n));
}


//d(1234)	=1+ d(123)
//		=1+ 1 +d(12)
//		=1+ 1 +1 +d(1)
//		=1+ 1 +1 +1
