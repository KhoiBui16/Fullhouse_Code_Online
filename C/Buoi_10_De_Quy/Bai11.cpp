//10.11
#include <stdio.h>

void printDigitFirst(long long n){
	if (n<10) {
		printf("%lld ",n);
		return;
	}
	printDigitFirst(n/10);
	printf("%d ",n%10);
}
void lastDigitFirst(long long n){
	if (n<10) {
		printf("%lld ",n);
		return;
	}
	printf("%d ",n%10);
	lastDigitFirst(n/10);
}

int main(){
	long long n;
	scanf("%lld",&n);
	printDigitFirst(n);
	printf("\n");
	lastDigitFirst(n);
}

