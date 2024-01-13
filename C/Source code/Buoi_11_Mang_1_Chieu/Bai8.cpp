//11.8
#include <stdio.h>

int ntcn(int x,int y){
	for(int i=2;i<=x&&i<=y;++i) 
		if(x%i==0&&y%i==0) return 0;
	return 1;
}

int main(){
	int n,d=0;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int x;
	scanf("%d",&x);
	for(int i=0;i<n;i++) if(ntcn(x,a[i])) d++;
	printf("%d\n",d);
	for(int i=0;i<n;i++) if(ntcn(x,a[i])) printf("%d ",a[i]);
}
