////7.5 c1
//#include <stdio.h>
//#include <math.h>
//
//int nto(int x){
//	if(x<2) return 0;
//	for(int j=2;j <= sqrt(x);j++){
//		if (x%j==0) return 0;
//	}
//	return 1;
//}
//
//int tim(int x){
//	for(int i=2;i<=sqrt(x);i++){
//		// ktra chia binh trc roi ktra ngto sau
//		if(x%(i*i)==0 && nto(i)==1){
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main(){
//	int n,m;
//	scanf("%d%d",&n,&m);
//	for(int i=n;i<=m;i++){
//		if(tim(i)==1){
//			printf("%d ",i);
//		}
//	}
//}


//7.5 c2
#include <stdio.h>
#include <math.h>

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
			if(cnt > 1)
				return 1;
		}
	}
	return 0;
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
