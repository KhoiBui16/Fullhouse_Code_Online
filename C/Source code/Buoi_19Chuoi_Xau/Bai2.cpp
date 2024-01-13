//19.2
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char a[1001];

void tim(){
	for(int i=0;i<strlen(a);i++){
		if(isupper(a[i])) 
			a[i] = tolower(a[i]);
	}
}

int main(){
	gets(a);
	tim();
	printf("%s",a);
//	printf("%s",strlwr(a));    
	return 0;
}
