//2.18
#include <stdio.h>
#include <math.h>

int main(){
	long long m,n,a,t1,t2,s;
	scanf ("%lld%lld%lld",&m,&n,&a);
	
	t1 = ceil(m*1.0/a);
	t2 = ceil(n*1.0/a);
	
	printf ("%lld",t1*t2);
	return 0;
}
