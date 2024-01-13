//8.8
#include <stdio.h>

int largestPrimeDivisor(int n){
	for(int i = 2; i*i <= n; ++i){
		while(!(n%i)){
			n /= i;
			if(i > n) return i;
		}
	}
	return n;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d\n",largestPrimeDivisor(n));
	}	
}
