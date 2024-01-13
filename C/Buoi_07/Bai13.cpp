//7.13
#include <stdio.h>

int checkFibo(long long x){
	long long a = 0, b = 1;
	if(x == 0 || x == 1)
		return 1;
	while(b<x){
		long long c = a + b;
		a = b;
		b = c;
	}
	return b == x;
}

int main(){
	long long n;
	scanf("%lld",&n);
	if(checkFibo(n)) printf("YES");
	else printf("NO");
	return 0;
}
//
////8
////
////a=0
////b=1
////
////c=a+b=0+1=1
////a  =b=1
////b  =c=1
////
////c=a+b=1+1=2
////a=b= 1
////b=c=2
////
////c=a+b=1+2=3
////a=b= 2
////b=c=3
////
////c=a+b=2+3=5
////a=b= 3
////b=c=5
////
////c=a+b=3+5=8
////a=b= 5
////b=c=8
////
////
////b<n
////
////
////b==n  -> n thuoc day
////b!=n   -> no khong thuoc day



