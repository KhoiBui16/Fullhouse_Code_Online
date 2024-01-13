//1.8
#include <stdio.h>

//1ll * int * int = long long
//1.0 * int / int = float

int main(){
	int n;
	scanf("%d",&n);
	long long b = 1ll * n * (n+1) / 2;
	printf("%lld",b);
	return 0;
}
