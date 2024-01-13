//7.9
#include <stdio.h>

int checkPrime(int n){
	if(n < 2) return 0;
	for(int i = 2; i*i <= n; ++i){
		if(!(n%i)) return 0;
	}
	return 1;
}

int sumDigit(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int smith(int n){
	int sum = 0;
	for (int i = 2; i*i <= n; ++i){
		while(!(n % i)){
			sum += sumDigit(i);
			n /= i;
		}
	}
	if(n != 1) sum += sumDigit(n);
	return sum;
}

int main(){
	int n;
	scanf("%d",&n);
	if(!checkPrime(n) && smith(n) == sumDigit(n))
		printf("YES");
	else printf("NO");
}
