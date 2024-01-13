//3.1
#include<stdio.h>

main(){
	int n;
	long long t = 0;
	scanf("%d",&n);
	for(int i=1; i <= n; ++i) {
		t += i;
	}
	printf("%lld",t);
	return 0;
}
