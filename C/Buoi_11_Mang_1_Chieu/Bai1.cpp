//11.1
#include <stdio.h>

int isPrime(int x){
	if(x<2) return 0;
	for(int i = 2; i*i <= x; ++i)
		if(x % i == 0) return 0;
	return 1;
}

int main (){
	int n, cnt=0;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; ++i) 
		scanf("%d",&a[i]);
	for(int i = 0; i < n; ++i){
		if(isPrime(a[i])) ++cnt;
	}
	if(cnt)
		printf("%d",cnt);
	else
		printf("NONE");
	return 0;
}
