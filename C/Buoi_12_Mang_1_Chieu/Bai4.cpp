//12.4
#include <stdio.h>

int main(){
	int n,c=0,l=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	
	for(int i=0;i<=n/2;++i){
		if(a[i]!=a[n-i-1]) {
			printf("NO");
			return 0;
		}
	}
	printf("YES");
}
