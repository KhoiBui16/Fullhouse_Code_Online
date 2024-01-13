//10.8
#include <stdio.h>

float tinh(int n){
	if(n==1) return 1;
	else return 1.0/n+tinh(n-1);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%.3f",tinh(n));
}
