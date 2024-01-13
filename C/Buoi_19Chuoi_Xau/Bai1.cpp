//19.1
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char a[1001];

int tim(){
	int dem=0;
	for(int i=0;i<strlen(a);i++){
		if(islower(a[i])) dem++;
	}
	return dem;
}

int main(){
	gets(a);
	printf("%d",tim());
	return 0;
}
