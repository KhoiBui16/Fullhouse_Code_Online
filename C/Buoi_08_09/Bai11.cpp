//8.11
#include <stdio.h>
#include <math.h>

int NumDivisorOdd (long long n){
	int x = sqrt(n);
	return x == sqrt(n);
}

int main (){
	long long n;
	scanf ("%lld", &n);
	if (NumDivisorOdd(n)%2==0) 
		printf ("NO");
	else printf ("YES");
	return 0;
}
