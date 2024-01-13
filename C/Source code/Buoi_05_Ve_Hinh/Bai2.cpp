//5.2
#include <stdio.h>

int main(){
	int n; scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=i;j<=i+n-1;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
