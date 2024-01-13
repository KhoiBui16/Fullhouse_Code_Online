//10.2 
#include <stdio.h>

int tinh(int n){
	if(n==1) return 1;
	else return n*n+tinh(n-1);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",tinh(n));
}
