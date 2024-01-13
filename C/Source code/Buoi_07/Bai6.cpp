//7.6
//Chi het cho so nguyen to nao thi cung chia het cho so nguyen to do
#include <stdio.h>
#include <math.h>

int ktra(int n){
	for (int i = 2; i <= sqrt(n); ++i){
		if(!(n % i)){
			int cnt = 0;
			while(!(n % i)){
				++cnt;
				n /= i;
			}
			if(cnt == 1)
				return 0;
		}
	}
	if(n != 1)
		return 0;
	return 1;
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = n; i <= m; ++i){
		if(ktra(i) == 1){
			printf("%d ",i);
		}
	}
	return 0;
}
