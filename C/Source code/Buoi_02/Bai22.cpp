//2.8   C1
#include <stdio.h>

int main(){
	long long n;
	scanf("%lld",&n);
	int b=n/100;
	int c=(n-b*100)/20;
	int d=(n-b*100-c*20)/10;
	int e=(n-b*100-c*20-d*10)/5;
	int f=n-b*100-c*20-d*10-e*5;
	printf("%d",b+c+d+e+f);
	return 0;
}



//2.8   C2
#include <stdio.h>

int main(){
	long long n;
	scanf("%lld",&n);
	int b=n/100;
	int c=n%100/20;
	int d=n%100%20/10;
	int e=n%100%20%10/5;
	int f=n%100%20%10%5;
	printf("%d",b+c+d+e+f);
	return 0;
}

