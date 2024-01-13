// 2.10  c1
#include <stdio.h>

int main(){
	char a;
	scanf("%c",&a);
	if(a>='A'&&a<='Z'){
		a=a+32;
		printf("%c",a);
	}else printf("%c",a);
	return 0;
}



//c2
int main(){
	char a;
	scanf("%c",&a);
	a += (a<='Z'&&a>='A') ? 32 : 0;
	printf("%c",a);
	return 0;
}
