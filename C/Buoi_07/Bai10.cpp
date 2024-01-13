//7.10
#include <stdio.h>

int giaithua(int n){
	int gt=1;
	for(int i=1;i<=n;i++) gt*=i;
	return gt;
}

int tonggt(int n){
	int tam=n;
	int tong=0;
	while(n!=0){
		tong+=giaithua(n%10);
		n/=10;
	}
	if (tam==tong) return 1;
	return 0;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int tam=0;
	for(int i=a;i<=b;i++){
		if(tonggt(i)==1) printf("%d ",i), tam=1;
	}
	if(tam==0) printf("0");
	return 0;
}
