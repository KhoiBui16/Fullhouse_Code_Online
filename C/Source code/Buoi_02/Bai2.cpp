// 1.16
#include <stdio.h>


//c1
int main(){
	int n;
	scanf("%d",&n);
	if(n%15==0){
		printf("%d",1);
	}else printf("%d",0);	
	return 0;
}



//c2
int main(){
	int n,tam;
	scanf("%d",&n);
	tam= (n%15 ? 0 : 1);
	printf("%d",tam);
	return 0;
}



//c3
int main(){
	int n,tam;
	scanf("%d",&n);
	printf("%d",!(n%15));
	return 0;
}
