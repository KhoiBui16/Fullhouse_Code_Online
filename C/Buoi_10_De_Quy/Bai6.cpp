//10.6
#include <stdio.h>

long long fi(int n){
	if (n==1||n==2) return n-1;
	return fi(n-1)+fi(n-2);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%lld",fi(n));
}


