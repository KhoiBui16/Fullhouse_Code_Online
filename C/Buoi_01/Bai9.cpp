//1.9
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	long long m= 1ll*n*(n+1)*(2*n+1)/6;
	printf("%lld",m);
	return 0;
}
