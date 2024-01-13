//11.7
#include <stdio.h>
#include <math.h>

int main(){
	int n,d=0;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int x;
	scanf("%d",&x);
	for(int i=0;i<n;i++) if((a[i])==x) d++;
	printf("%d",d);
}
