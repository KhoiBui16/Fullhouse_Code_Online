//19.11
#include <stdio.h>
#include <string.h>
char a[1001];

int tim(){
	int dem=0;
	while(a[dem++]!='\0');
	return dem-1;
}

int main(){
	gets(a);
	printf("%d",tim());
//	printf("%d",strlen(a));
	return 0;
}
