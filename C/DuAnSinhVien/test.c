#include <stdio.h>

void tang(int &a){
	a += 10;
}

int main(){
	int a = 10;
	tang(a);
	printf("%d",a);
}
