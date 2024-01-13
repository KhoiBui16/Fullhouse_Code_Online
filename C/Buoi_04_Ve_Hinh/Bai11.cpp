//4.11
#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=i;j>1;j--){
			printf("%d ",j);
		}
		for(int j=1;j<=a-i+1;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}



// c2
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	for (int i = 1; i <= n; ++i){
		int cnt = i, d = -1;
		for(int j = 1; j <= n; ++j){
			printf("%d ", cnt);
			if (cnt == 1)
				d = 1;
			cnt += d;
		}
		printf("\n");
	}
}



	
	
	
	
	
	
	
	
	
	
	
	
	
