//2.15
#include <stdio.h>

int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a){
		if(a==b && a==c){
			printf("1");
		}else if (a==b || b==c || c==a){	
			printf("2");
		}else if(a*a==b*b+c*c||a*a+b*b==c*c||a*a+c*c==b*b){
			printf("3");
		}else printf("4");
	}else printf("INVALID");
	return 0;
}



