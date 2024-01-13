//12.10
#include <stdio.h>

int main (){
	int n;
	scanf("%d",&n);
	int a[n+2];	
	for(int i=1;i<=n;++i) 
		scanf("%d",&a[i]);
	a[0]=0, a[n+1]=0;
	
	for(int i=1;i<=n;++i){
		if(a[i]*a[i-1]<0||a[i]*a[i+1]<0) 
			printf("%d ",a[i]);
	}
	return 0;
}
