//3.3  c1
#include <stdio.h>

int main() {
    int n,t=0;
	scanf("%d",&n);
	for(int i=1;i<=n;++i) {
		if(i%3==0) t+=i;
	}
	printf("%d",t);
    return 0;
}



//3.3   c2
#include <stdio.h>

int main() {
    int n,t=0;
	scanf("%d",&n);
	for(int i=3;i<=n;i+=3) t+=i;
	printf("%d",t);
    return 0;
}




