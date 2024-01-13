////7.12 c1
//#include <stdio.h>
//#include <math.h>
//
//int squareNum(int x){
//    int sqrt_x = sqrt(x);    
//    return sqrt_x == sqrt(x);
//}
//
//int main(){
//    int m;
//    scanf("%d",&m);
//    for (int i=1;i<=m;i++){
//    	int a,b;
//        scanf("%d%d",&a,&b);
//        int cnt = 0;
//        for(int i=a;i<=b;i++){
//        	if (squareNum(i) == 1) 
//				++cnt;
//		}
//		printf("%d\n",cnt);
//    }
//    return 0;
//}


//7.12 c2
#include<stdio.h>
#include<math.h>
int main() {
	int t,n,i,a,b,d;
	scanf("%d",&t);//t la so test case;
	for(i=1; i<=t; i++) {
		d=0;
		scanf("%d%d",&a,&b);//nhap khoang (a,b) can xet;
		int start=ceil(sqrt(a));     //ham lam tron len
		int end=(sqrt(b));     
		printf("%d\n",end - start + 1);
	}
	return 0;
}
