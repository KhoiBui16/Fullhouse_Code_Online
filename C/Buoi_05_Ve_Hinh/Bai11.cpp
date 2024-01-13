//5.11
#include <stdio.h>

int main(){
	int n; scanf("%d",&n);
	int tam;
	for(int i=1;i<=n;i++){
		int t=n-1;
		tam=i;
		for(int j=1;j<=i;j++){
			printf("%d ",tam);
			tam=tam+t;
			t--;
		}
		printf("\n");
	}
	return 0;
}
