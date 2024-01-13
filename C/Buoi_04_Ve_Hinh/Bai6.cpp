//4.6
#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			if(j<i) printf("~");
			else printf("*");
		}
		printf("\n");
	}
	return 0;
}

