//5.4
#include <stdio.h>

int main(){
	int n; scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int j=1;
		for(;j<=n-i;j++){
			printf("~");
		}
		for(;j<=n;j++){
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
