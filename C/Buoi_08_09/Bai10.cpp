//8.10
#include<stdio.h>
#include<math.h>

void perfectSquare(long long a, long long b){
	int start = ceil(sqrt(a));   
	int end = (sqrt(b));     
	for(int i = start; i <= end; ++i)
		printf("%lld ",1ll*i*i);
}

int main() {
	long long a,b;
	scanf("%lld%lld",&a,&b);
	perfectSquare(a,b);
	return 0;
}
