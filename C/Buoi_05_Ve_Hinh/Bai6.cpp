//5.6  c1
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=n;i>=1;--i){
		for(int j=n;j>i;--j){
			printf("%d",j);
		}
		for(int j=1;j<=2*i-1;++j){
			printf("%d",i);
		}
		for(int j=i+1;j<=n;++j){
			printf("%d",j);
		}
		printf("\n");
	}
	
	for(int i=2;i<=n;++i){
		for(int j=n;j>i;--j){
			printf("%d",j);
		}
		for(int j=1;j<=2*i-1;++j){
			printf("%d",i);
		}
		for(int j=i+1;j<=n;++j){
			printf("%d",j);
		}
		printf("\n");
	}
}



//c2
#include <stdio.h>

int main(){
	int n, di = -1;
	scanf("%d",&n);
	
	for (int i = n; i <= n; i += di){
		int dj = -1, fe = 2 * i - 1;
		for (int j = n; j <= n; j += dj){
			printf("%d", j);
			if (j == i) dj = 0;
			if (dj == 0) --fe;
			if (fe == 0) dj = 1;
		}
		if (i == 1) di = 1;
		printf("\n");
	}
}

