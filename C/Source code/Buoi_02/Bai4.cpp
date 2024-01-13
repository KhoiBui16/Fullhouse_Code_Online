//2.4
#include <stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	if(n<=0 || n>12 || m<=0){
		printf("INVALID");
	}else{
		if (n == 2){
			if(m%4==0&&m%100!=0||m%400==0)
				printf("29");
			else printf("28");
		} else if (n==4||n==6||n==9||n==11){
			printf("30");
		}else{
			printf("31");
		}
	}
	return 0;
}
