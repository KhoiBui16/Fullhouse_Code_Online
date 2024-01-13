//3.9
#include <stdio.h>

int main(){
	long long n;
	int dem=0; scanf("%lld",&n);
	if(n==0) dem=1;
	while(n>0){
		dem++;
		n/=10;
	}
	printf("%d",dem);
	return 0;
}
