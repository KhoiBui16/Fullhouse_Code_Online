//3.14
#include <stdio.h>

int main(){
	long long n;
	scanf("%lld",&n);
	printf("%lld\n",n/2);
	for(int i = 1 ;i < n/2; ++i) 
		printf("%d ",2);
	if(!(n%2))
		printf("2");
	else 
		printf("3");
	return 0;
}
