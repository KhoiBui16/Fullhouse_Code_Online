//2.20
#include<stdio.h>
#include<math.h>

int main(){
	long n,a,b;
	scanf("%ld%ld%ld",&n,&a,&b);
	if(2*a>b){
		long c = n/2*b;
		if(n%2 !=0){
			printf("%ld",c+a);
		}else printf("%ld",c);
	}else printf("%ld",n*a);
}
 
 
 
 
 
 
 
 
