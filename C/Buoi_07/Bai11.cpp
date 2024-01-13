//9.11
#include <stdio.h>
#include <math.h>

int squareNum(long long x){
    int sqrt_x = sqrt(x);    
    return sqrt_x == sqrt(x);
}

int main(){
	long long n;
    scanf("%lld", &n);
    if (squareNum(n)) printf("YES");
	else printf("NO");
    return 0;
}

