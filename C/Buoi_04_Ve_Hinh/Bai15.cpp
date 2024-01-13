//4.15
#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=a;i>=1;i--){
		for(int j=a;j>i;j--){
			printf("%d ",j);
		}
		for(int j=1;j<=i;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
