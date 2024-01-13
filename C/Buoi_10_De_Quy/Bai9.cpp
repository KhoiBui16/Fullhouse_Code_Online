//10.9   c1
#include <stdio.h>

long long GCD(long long x, long long y){
	if(x == y) return x;
	if(x>y) return GCD(x-y,y);
	return GCD(x,y-x);
}

long long LCM(long long x, long long y){
	return x / GCD(x,y) * y;
}

int main(){
	long long x,y;
	scanf("%lld%lld",&x,&y);
	printf("%lld %lld",GCD(x,y), LCM(x,y));
}





//10.9 c2
#include <stdio.h>

long long GCD(long long x, long long y){
	if(!y) return x;
	return GCD(y,x%y);
}

long long LCM(long long x, long long y){
	return x / GCD(x,y) * y;
}

int main(){
	long long x,y;
	scanf("%lld%lld",&x,&y);
	printf("%lld %lld",GCD(x,y), LCM(x,y));
}



