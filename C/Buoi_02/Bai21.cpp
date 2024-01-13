//2.21  c1
#include <stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(b%a==0) printf("%d",b/a);
	else printf("%d",b/a+1);
	return 0;
}



//2.21  c2
#include <stdio.h>
#include <math.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%.0f",ceil(b*1.0/a));
	return 0;
}


