//4.8
#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		int j=1;
		for(;j<i;j++){
			printf("~");
		}
		for(;j<=a;j++){
			if(i==1||i==a||j==a||j==i){
				printf("*");
			}else{
				printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}
