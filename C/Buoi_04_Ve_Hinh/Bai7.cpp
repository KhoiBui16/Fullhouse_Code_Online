//4.7
#include <stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
		if(i%2==1){
			for(int j=1;j<=b;j++){
				printf("1");
			}	
		}else{
			for(int j=1;j<=b;j++){
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
