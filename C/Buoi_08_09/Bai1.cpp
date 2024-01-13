

//8.1 c1
#include <stdio.h>
#include <math.h>

int squareNum(long long x){
    int sqrt_x = sqrt(x);    
    return sqrt_x == sqrt(x);
}

int main(){
   	long long a,b;
    scanf("%lld%lld",&a,&b);
    for(long long i=a;i<=b;i++){
    	if (squareNum(i) == 1) 
			printf("%lld ",i);
	}
    return 0;
}

//8.1 c1
#include <stdio.h>
#include <math.h>

int squareNum(long long x){
    int sqrt_x = sqrt(x);    
    return sqrt_x == sqrt(x);
}

int main(){
   	long long a,b;
    scanf("%lld%lld",&a,&b);
    for(long long i=a;i<=b;i++){
    	if (squareNum(i) == 1) 
			printf("%lld ",i);
	}
    return 0;
}
