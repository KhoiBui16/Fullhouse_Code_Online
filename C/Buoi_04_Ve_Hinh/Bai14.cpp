//4.14  c1
#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=a;i>=1;i--){
		for(int j=1;j<=2*(a-i);j++){
			printf("~");
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=2;i<=a;i++){
		for(int j=1;j<=2*(a-i);j++){
			printf("~");
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}





//4.14 c2
#include <stdio.h>

int main(){
	int n, d = 1;
	scanf("%d",&n);
	for(int i=0;i>=0;i += d){
		for(int j=1;j<=n+i;++j){
			if(j<=i*2) printf("~");
			else printf("*");
		}
		if(i==n-1) d = -1;
		printf("\n");
	}
}
