//1.3
#include <stdio.h>
#include <math.h>

int main(){
	int xa, ya, xb, yb;
	scanf("%d%d%d%d",&xa,&ya,&xb,&yb);
	float kc=sqrt(pow(yb-ya,2)+pow(xb-xa,2));
	printf("%.2f",kc);
	return 0;
}


