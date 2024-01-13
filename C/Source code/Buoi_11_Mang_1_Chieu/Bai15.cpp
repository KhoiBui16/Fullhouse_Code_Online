//11.15
#include <stdio.h>

int main(){
	int n, num, pos;
	scanf("%d%d%d",&n,&num,&pos);
	int a[n];
	for(int i = 0; i < n; ++i){
		scanf("%d",&a[i]);
	}
	for(int i = 0; i < pos - 1; ++i){
		printf("%d ",a[i]);
	}
	printf("%d ",num);
	for(int i = pos - 1; i < n; ++i){
		printf("%d ",a[i]);
	}
}
