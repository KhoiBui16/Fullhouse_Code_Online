//4.5
//c1
//#include <stdio.h>
//
//int main(){
//	int a,d;
//	scanf("%d",&a);
//	for(int i=1;i<2*a;i++){
//		d=i;
//		if(i>a){
//			d=2*a-i;
//		}
//		for(int j=1;j<=d;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include<stdio.h>


//c2
int main(){
   int a;
   scanf("%d",&a);
   for(int i=1;i<=a;i++){
		for(int j=1;j<=i;j++){
		   	printf("*");
	    }printf("\n");
	}
	for(int i=a-1;i>0;i--){
		for(int j=1;j<=i;j++){
		   	printf("*");
	    }printf("\n");
	}
}



//c3
#include<stdio.h>

int main(){
	int n, d = 1;
	scanf("%d",&n);
	for(int i = 1; i >= 1; i += d){
		for(int j = 1; j <= i; ++j){
			printf("*");
		}
		printf("\n");
		if(i == n) d = -1;
	}
}
