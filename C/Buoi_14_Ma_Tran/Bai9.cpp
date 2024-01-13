//14.9
#include <stdio.h>
int a[1000][1000],n;

int tc(int x){
	int t=0;
	for(int i=0;i<n;++i) {
		t+=a[i][x];
	}
	return t;
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j) 
			scanf("%d",&a[i][j]);
	int max=tc(0),vc=0;
	for(int j=1;j<n;++j){
		int tinh=tc(j);
		if(tinh>=max){
			max=tinh;
			vc=j;
		}
	}
	printf("%d\n",vc+1);
	for(int i=0;i<n;++i){
		printf("%d ",a[i][vc]);
	}
}
