//19.6
#include <stdio.h>
char a;

int ktra(){
	if(a>='A'&&a<='Z'||a>='a'&&a<='z') return 1;
	return 0;
}

int main(){
	scanf("%c",&a);
	printf("%d",ktra());
	return 0;
}
