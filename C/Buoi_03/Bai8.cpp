//3.8
#include <stdio.h>

int main() {
    int n;
    int t=1;
	scanf("%d",&n);
	for(int i=1;i<=n;++i) {
		t*=i;
	}
	printf("%d",t);
    return 0;
}
