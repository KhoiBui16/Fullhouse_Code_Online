//1.5
//c1
#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",abs(n));
	return 0;
}


//c2
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	if (n < 0) n *= -1;
	printf("%d",n);
	return 0;
}



//c3
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int x = n > 0 ? n : -n;
	printf("%d",x);
	return 0;
}
