//19.16 cach 1
#include<stdio.h>
#include<string.h>
int main(){
	char a[300];
	gets(a);
	int dem=1;
	for(int i=0;i<strlen(a);i++){
		if(a[i]==' '&&a[i+1]!=' '){
			dem++;
		}
	}
	printf("%d ",dem);
}





//19.16 cach 2
#include <stdio.h>
#include <string.h>

int main(){
	char a[300];
	gets(a);
	int dem=0;
	
	char *t=strtok(a," ");
	while(t!=NULL){
		t=strtok(NULL," ");
		dem++;
	}
	
	printf("%d",dem);
}


