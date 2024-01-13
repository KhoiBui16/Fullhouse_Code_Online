//6.6
#include <stdio.h>
#include <math.h>

int tn(int x){
	int y=x;
	int a=0;
	while(x>0){
		a=a*10+x%10;
		x/=10;
	}
	if(y==a) return 1;
	else return 0;
}

int ktra(int x){
	int t=0;
	while(x>0){
		t+=x%10;
		x/=10;
	}
	if(t%10==0) return 1;
	else return 0;
}

int main(){
	int a,dem=0;
	scanf("%d",&a);
	for(int i=pow(10,a-1);i<=pow(10,a);i++){
		if(tn(i)==1 && ktra(i)==1){
			dem++;
		} 
	}
	printf("%d",dem);
	return 0;
}
