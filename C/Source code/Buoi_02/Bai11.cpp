//2.11 c1
#include <stdio.h>

int main(){
	char a;
	scanf("%c",&a);
	if(a>='a'&&a<='z'){ 
		a=a-32;
		printf("%c",a);
	}else printf("%c",a);
	return 0;
}


//c2
int main(){
	char a;
	scanf("%c",&a);
	a -= (a<='z'&&a>='a') ? 32 : 0;
	printf("%c",a);
	return 0;
}
