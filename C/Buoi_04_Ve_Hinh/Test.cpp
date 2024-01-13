#include <stdio.h>

int main(){
	int h, c;
	scanf("%d%d", &h, &c);
	//hang dau
	for(int i = 1; i <= c; i++){
		printf("*");
	}printf("\n");
	//o giua
	for (int j = 1; j <= h - 2; j++){// -2 hang dau va cuoi
		// in phan trái
		for(int k = 1;k <= j; k++){
			printf("~");
		}
			printf("*");
		//in phan giua hang	
		for (int i = 1;  i <= c - 2;i++){// +1 la dau ~ con -2 la 2 dau * 2 ben
			printf(".");
	}
	
		printf("*");
		printf("\n");
		
	}
	//hangcuoi 
	for(int m =1; m<= h -1 ; m++){
		printf("~");
	}
	
	for(int i = 1; i <= c; i++){
		printf("*");
	}
}
