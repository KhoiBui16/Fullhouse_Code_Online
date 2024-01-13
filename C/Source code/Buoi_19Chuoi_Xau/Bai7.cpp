//19.7
#include <stdio.h>
char a;

int ktra(){
	if(a>='a'&&a<='z') return 1;
	return 0;
}

int main(){
	scanf("%c",&a);
	printf("%d",ktra());
	return 0;
}
