//5.3
//c1
#include <stdio.h>

int main(){
	int n; scanf("%d",&n);
	int dem=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",dem++);
		}
		printf("\n");
	}
	return 0;
}






//c2
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		for(int j=1;j<=n;++j)
			printf("%d ",i*n+j);
		printf("\n");
	}
}
