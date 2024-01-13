//11.9
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int max=a[0],min=a[0],va=0,vi=0;
	for(int i=0;i<n;i++) {
		if(a[i]>=max){
			va=i;
			max=a[i];
		}
		else if(a[i]<=min){
			vi=i;
			min=a[i];
		}	
	}
	printf("%d %d\n%d %d",max,va+1,min,vi+1);
}
