//3.4 
#include <stdio.h>

int main() {
    int n;
    float t=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		t+=1/(float)i;
	}
	printf("%.3f",t);
    return 0;
}
