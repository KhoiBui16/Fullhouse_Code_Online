//2.19
#include <stdio.h>
#include <math.h>

int main(){
	int m,n,x,a;
	scanf("%d%d%d",&m,&n,&x);
	a=m-n;
	if(x%2==0) printf("%d",abs(a*x/2));
	else printf("%d",abs(a*(x/2)+m));
	
	return 0;
}
