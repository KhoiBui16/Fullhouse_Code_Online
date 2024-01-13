//7.4 c1
#include <stdio.h>
#include <math.h>

int primeK(int n, int m){
	int d = 0;
	for(int i=2;i*i<=n;++i){
		while(n%i==0){
			d++;
			if(d==m) {
				return i;
			}
			n/=i;
		}
	}
	if(d==m-1) return n;
	return -1;
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d",primeK(n,m));
}


