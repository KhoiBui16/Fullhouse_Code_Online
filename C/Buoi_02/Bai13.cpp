//2.13
#include<stdio.h> 

//c1
int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int max = a;
	if(b > max) max = b;
	if(c > max)max = c;
	
	int min = a;
	if(b < min) min = b;
	if(c < min) min = c;	
	
	printf("%d %d", max, min);
	return 0;
}





//c2
#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a >= b && a >= c) printf("%d ",a);
	else if(b >= a && b >= c) printf("%d ",b);
	else printf("%d ",c);

	if(a <= b && a <= c) printf("%d",a);
	else if(b <= a && b <= c) printf("%d",b);
	else printf("%d",c);
}

