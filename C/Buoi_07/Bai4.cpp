//7.4  c1
#include <stdio.h>
int hh(int x){
	int n=0;
	for(int i=1;i<x;i++){
		if(x%i==0) n+=i;
	}
	if(n==x) return 1;
	else return 0;
}
int main(){
	int a,b,dem=0;
	scanf("%d%d",&a,&b);
	
	if(a>b){
		int c=a;
		a=b;
		b=c;
	}
	for(int i=a;i<=b;i++){
		if(hh(i)==1) {
			dem++;
			printf("%d ",i);
		}
	}
	if(dem==0) printf("0");
	return 0;
}








//7.4    c2
#include <stdio.h>
#include <math.h>

int tong(int x){
	int n=0;
	int a=sqrt(x);
	for(int i=2;i<=a;i++){
		if(!(x%i)) n = n+i+x/i;
	}
	if(a*a==x) n-=a;
	if(n+1==x&&n) return 1;
	else return 0;
}

int main(){
	int a,b,dem=0;
	scanf("%d%d",&a,&b);
	if(a>b){
		int c=a;
		a=b;
		b=c;
	}
	for(int i=a;i<=b;++i){
		if(tong(i)){
			++dem;
			printf("%d ",i);
		} 
	}
	if(!dem) printf("0");
	return 0;
}
