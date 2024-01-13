//10.4
#include <stdio.h>
#include <math.h>

int t(int n){
	if (n==1) return -1;
	return pow(-1,n)*n+t(n-1);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",t(n));
}
