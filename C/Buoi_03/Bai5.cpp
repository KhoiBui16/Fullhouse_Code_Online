//3.5
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int t=0;
	scanf("%d",&n);
	for(int i=1; i <= n; ++i) {
		t+=i*pow(-1,i);
	}
	printf("%d",t);
    return 0;
}
