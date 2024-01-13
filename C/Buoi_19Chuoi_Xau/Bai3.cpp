//19.3
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char a[1001];

void tim(){
	for(int i=0;i<strlen(a);i++){
		if(islower(a[i])) 
			a[i] = toupper(a[i]);
	}
}

int main(){
	gets(a);
	tim();
	printf("%s",a);
//	printf("%s",strupr(a));    
	return 0;
}
