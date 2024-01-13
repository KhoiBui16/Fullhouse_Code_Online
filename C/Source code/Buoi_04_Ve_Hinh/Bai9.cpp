//4.9   c1
#include <stdio.h>

int main(){
	int a,b=1;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			printf("%d ",b++);
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


