//15.2
#include <stdio.h>
#define ll long long

void update(ll &b1,ll &b2,ll &b3){
	b3 = b1 + b2;
	b1 = b2; 
	b2 = b3; 
}

int main(){
	int n;
	scanf("%d",&n);
	ll a[n][n];
	ll b1 = 1, b2 = 0, b3 = b2;
	for(int i=0;i<=n/2;++i){
		for(int j=i;j<n-i;++j) {
			a[i][j] = b3;
			update(b1, b2, b3);	
		}
		for(int j=i+1;j<n-i;++j) {
			a[j][n-i-1]= b3;
			update(b1, b2, b3);
		}
		for(int j=n-i-2;j>=i;--j) {
			a[n-i-1][j]= b3;
			update(b1, b2, b3);
		}
		for(int j=n-i-2;j>i;--j) {
			a[j][i]= b3;
			update(b1, b2, b3);
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j) printf("%lld ",a[i][j]);
		printf("\n");
	}
}
