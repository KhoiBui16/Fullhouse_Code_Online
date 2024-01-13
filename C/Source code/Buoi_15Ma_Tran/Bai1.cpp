//15.1
#include <stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m],b[m][n];
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j) 
			scanf("%d",&a[i][j]);
	} 
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j) 
			scanf("%d",&b[i][j]);
	} 

	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j) {
			int t=0;
			for(int h=0;h<m;++h){
				t+=a[i][h]*b[h][j];
			}	
			printf("%d ",t);
		}
		printf("\n");
	} 	
}


a[n][m],b[m][n];

					  A               B
					1 2 3           3 4 5
					4 5 6           6 7 8
					7 8 9           1 2 3
					
1*3+2*6+3*1=18        1*4+2*7+3*2=24         1*5+2*8+3*3=30  
4*3+5*6+6*1=48        4*4+5*7+6*2=63         4*5+5*8+6*3=78 
7*3+8*6+9*1=78        7*4+8*7+9*2=102        7*5+8*8+9*3=123 

						18 24 30
						48 63 78
						78 102 126



//	//i h j
//	//n m p
//	a[n][m] * b[m][p]         // trai phai giua
//	for(int i = 0; i < n; ++i){
//		for(int j = 0; j < p; ++j){
//			int t = 0;
//			for(int h = 0; h < m; ++h){
//				t += a[i][h] * b[h][j];
//			}
//			printf("%d ",t);
//		}
//		printf("\n");
//	}








