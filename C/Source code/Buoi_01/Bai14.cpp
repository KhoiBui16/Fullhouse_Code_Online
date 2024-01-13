#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d",&a,&b);
	if(a % b == 0) printf("%d",a);
	else{
		a += b;
		printf("%d",a/b*b);
	}
}


//1.14  c1
#include <stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a%b==0) printf("%d",a);
	else{
		int c=(a/b+1)*b;
		printf("%d",c);
	}		
	return 0;
}




//1.14  c2
#include <stdio.h>
#include <math.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int c= ceil(a*1.0/b);
	printf("%d",c*b);
	return 0;
}




//1.14  c3
#include <stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int c=(a+b-1)/b*b;
	printf("%d",c);	
	return 0;
}

//		25 26 27 28 29 
//	   5    0 1 2 3 4
//			5 6 7 8 9
//			4 5 6 7 8
//			0 1 1 1 1
