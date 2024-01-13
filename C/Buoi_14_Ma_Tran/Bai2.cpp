//14.2
#include <stdio.h>
#include <math.h>
#include <string.h>

int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);++i)
		if(n%i==0) return 0;
	return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n][n],b[1000];
	int d=0;
	memset(b,0,sizeof(b));
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j) scanf("%d",&a[i][j]);
	} 
	for(int i=0;i<n;++i){
		if(nt(a[i][i])&&b[a[i][i]]==0){
			d++;
			b[a[i][i]]++;
		}
		if(nt(a[i][n-i-1])&&b[a[i][n-i-1]]==0){
			d++;
			b[a[i][n-i-1]]++;
		}
	} 
	printf("%d",d);
}
