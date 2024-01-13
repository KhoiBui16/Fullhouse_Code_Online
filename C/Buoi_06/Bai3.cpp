//5.3   p1
#include <stdio.h>
#include <math.h>

int checkPrime(int n){
	if(n<2) return 0;
	for(int i=2;i <= sqrt(n);i++){
		if(n%i==0)	return 0;
	}
	return 1;
}

int sumDigit(int x){
	int tong = 0, num;
	while(x != 0){
		num = x % 10;
		if(num != 2 && num != 3 && 
		   num != 5 && num != 7) 
		   		return 0;
		tong += num;
		x /= 10;
	}
	if(checkPrime(tong) == 1) return 1;
	else return 0;
}

int main(){
	int a,b,dem=0;
	scanf("%d%d",&a,&b);
	for(int i = a; i <= b; ++i){
		// sum roi ms check, nhu vay se tiet kiem time hon
		if(sumDigit(i) == 1 && checkPrime(i) == 1) 
			++dem;
	}
	printf("%d",dem);
	return 0;
}

