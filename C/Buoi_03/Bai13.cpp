//3.13
#include <stdio.h>

int main(){
	long long n;
	int dem=0; 
	scanf("%lld",&n);
	while(n!=0){
		int tam=n%10;
		if(tam==2||tam==3||tam==5||tam==7) 
			dem++;
		n /= 10;
	}
	printf("%d",dem);
	return 0;
}

