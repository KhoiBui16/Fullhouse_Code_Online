//7.1
#include <stdio.h>

int greatestCommonDivisor(int a, int b){
	while(a != b){
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}

void relativelyPrime(int a, int b){
	for(int i = a; i <= b; ++i){
		for(int j = i + 1; j <= b; ++j){
			if(greatestCommonDivisor(i,j) == 1)
				printf("(%d,%d)\n",i,j);
		}
	}
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	relativelyPrime(a,b);
}
