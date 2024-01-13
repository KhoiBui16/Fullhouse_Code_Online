//3.7
#include <stdio.h>

int main() {
    int n;
    int t=0;
	scanf("%d",&n);
	for(int i = 1; i <= n; ++i) {
		t += 2*i-1;
	}
	printf("%d",t);
    return 0;
}
