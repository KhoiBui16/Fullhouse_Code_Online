//3.10
#include <stdio.h>

int main() {
    long long x;
    int t=0;
	scanf("%lld",&x);
	while(x>0){
		t+=x%10;
		x/=10;
	}
	printf("%d",t);
    return 0;
}
