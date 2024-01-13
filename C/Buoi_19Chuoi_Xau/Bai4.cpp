//19.4
#include <stdio.h>

void chuyen(char a){
	if(a>='A'&&a<='Z')
		printf("%c",a+32);
	else printf("%c",a);
}

int main(){
	char x;
	scanf("%c",&x);
	chuyen(x);
	return 0;
}
