//7.3  c1
#include <stdio.h>

int tong(int x){
	int n=0;
	for(int i=1;i<=x/2;i++){
		if(x%i==0) n+=i;
	}
	if(n==x) return 1;
	else return 0;
}

int main(){
	int n;
	scanf("%d",&n);
  printf("%d",tong(n));
	return 0;
}






//c2
//7.3
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
	int n;
	scanf("%d",&n);
	printf("%d",tong(n));
	return 0;
}

