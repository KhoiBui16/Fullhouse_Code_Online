//5.9
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=i;j<n;j++){
			printf("%d",j);
		}
		for(int j=1;j<=i;j++){
			printf("%d",n);
		}
		printf("\n");
	}
	return 0;
}
