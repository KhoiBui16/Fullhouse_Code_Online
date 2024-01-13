//6.10
#include <stdio.h>
#include <stdbool.h>

bool ktra(long long x){
	if(x<10){
		return true;
	}else{
		long long tam=x;
		long long d=0;
		while (x!=0){
			d=d*10+x%10;
			x/=10;
		}
		if(d==tam) return true;
		else return false;
	}
}

int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		long long n;
		scanf("%lld",&n);
		if (ktra(n)==false) printf("NO\n");
		else printf("YES\n");
	}
}
