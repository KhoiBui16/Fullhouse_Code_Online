//3.11
#include<stdio.h>
main(){
	long long n;
	int t,c=0,l=0;
	scanf("%lld",&n);
	while (n>0){
		t=n%10;
		if ((t%2)==0){
			c +=t;
		}else{
			l+=t;
		}
		n /=10;
	}
	printf("%d %d",c,l);
	return 0;
}

