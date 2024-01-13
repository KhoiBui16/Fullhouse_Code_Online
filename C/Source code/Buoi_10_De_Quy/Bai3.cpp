//10.2 
#include <stdio.h>

long long tinh(int n){
	if(n==1) return 1;
	else return n*n*n + tinh(n-1);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%lld",tinh(n));
}
