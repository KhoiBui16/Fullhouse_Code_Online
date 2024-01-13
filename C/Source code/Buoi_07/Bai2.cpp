//7.2
#include <stdio.h>
#include <math.h>

int dem(int x){
	int d=0;
	while(x>0){
		d++;
		x/=10;
	}
	return d;
}

int ars(int x){
	int t=x;
	int a=0;
	while(x>0){
		a+=pow(x%10,dem(t));
		x/=10;
	}
	if(t==a) return 1;
	else return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(ars(i)==1) printf("%d ",i);
	}
	return 0;
}

