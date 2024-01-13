//8.7
#include <stdio.h>

int smallestPrimeDivisor(int n){
	for(int i = 2; i*i <= n; ++i){
		if(!(n%i))
			return i;
	}
	return n;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 1; i <= n; ++i){
		printf("%d\n",smallestPrimeDivisor(i));
	}
}
