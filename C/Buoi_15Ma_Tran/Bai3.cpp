//15.3
#include <stdio.h>
#include <math.h>
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);++i)
		if(n%i==0) return 0;
	return 1;
}
int tim(int n){
	while(nt(n)==0) n++;
	return n;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	int d=2;
	for(int i=0;i<=n/2;++i){
		for(int j=i;j<n-i;++j) a[i][j]=d,d=tim(d+1);
		for(int j=i+1;j<n-i;++j) a[j][n-i-1]=d,d=tim(d+1);
		for(int j=n-i-2;j>=i;--j) a[n-i-1][j]=d,d=tim(d+1);
		for(int j=n-i-2;j>=i+1;--j) a[j][i]=d,d=tim(d+1);
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j) printf("%d ",a[i][j]);
		printf("\n");
	}
}
