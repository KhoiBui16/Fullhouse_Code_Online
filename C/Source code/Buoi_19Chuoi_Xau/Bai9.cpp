//19.9
#include <stdio.h>
char a;

int ktra(){
	if(a>='0'&&a<='9') return 1;
	return 0;
}

int main(){
	scanf("%c",&a);
	printf("%d",ktra());
	return 0;
}
