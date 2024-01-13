//2.23
#include <stdio.h>
#include <math.h>

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	
	//so buoc toi thieu co the di
	int tam = ceil(m/2.0);
	
	//tim 1 so lon hon so buoc toi thieu nhung chia het cho n 1.14
	int b = ceil(tam*1.0/n);     
	
	printf("%d",b*n);  
	return 0;
}


