//20.4 cach 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char a[100];
void pl(){
	int i=strlen(a)-1;
	while(a[i]!=' '){
		i--;
	}
	for(int j=i+1;j<strlen(a);j++){
		printf("%c",tolower(a[j]));
	}
	printf("%c",tolower(a[0]));
	for(int j=0;j<i;j++){
		if(a[j]==' '&&a[j+1]!=' '){
			printf("%c@gmail.com",tolower(a[j+1]));
		}
	}
}

int main(){
	gets(a);
	pl();
	return 0;
}



//20.4 cach 2

int main(){
	char b[1000], a[100][100];
	gets(b);
	for(int i=0;i<strlen(b);++i){
		tolower(b[i]);
	}
	
	int n=0;
	char *t=strtok(b," ");
	while(t!=NULL){
		strcpy(a[n++],t);
		t=strtok(NULL," ");
	}
	
	printf("%s%c%c@gmail.com",a[2],a[0][0],a[1][0]);
}

