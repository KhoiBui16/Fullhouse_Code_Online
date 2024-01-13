//14.7 c1 phan 1
#include <stdio.h>
#include <string.h>
int tim(int n, int a[]){
	int max=a[0],vt=0;
	for(int i=1;i<n;++i){
		if(a[i]>max){
			max=a[i];
			vt=i;
		}
	}
	return vt;
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int h[n],c[m],a[n][m];
	memset(h,0,sizeof(h));
	memset(c,0,sizeof(c));
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j) 
			scanf("%d",&a[i][j]);
		
//13.7 c1 p2		
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j ){    
			h[i] +=a[i][j];
			c[j] +=a[i][j];
		}
	}
	
	int vh=tim(n,h);
	int vc=tim(m,c);
	
	for(int i=0;i<n;++i){
		if(i==vh) continue;
		for(int j=0;j<m;++j){
			if(j==vc) continue;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}


//c2   13.7 phan 3
//#include <stdio.h>
//int a[1000][1000],n,m;
//
//int th(int x){
//	int t=0;
//	for(int i=0;i<m;++i) {
//		if(i==n) continue;
//		t+=a[x][i];
//	}
//	return t;
//}
//
//int tc(int x){
//	int t=0;
//	for(int i=0;i<n;++i) {
//		t+=a[i][x];
//	}
//	return t;
//}
////14.7 phan 4
//int main(){
//	scanf("%d%d",&n,&m);
//	for(int i=0;i<n;++i)
//		for(int j=0;j<m;++j) scanf("%d",&a[i][j]);
//	
//	int max=tc(0),vc=0;
//	for(int j=1;j<m;++j){
//		int tinh=tc(j);
//		if(tinh>=max){
//			max=tinh;
//			vc=j;
//		}
//	}
//	int vh=0;
//	max=th(0);
//	for(int i=0;i<n;++i){
//		int tinh=th(i);
//		if(tinh>=max){
//			max=tinh;
//			vh=i;
//		}
//		
//	}
//	
//	for(int i=0;i<n;++i){
//		if(i==vh) continue;
//		for(int j=0;j<m;++j){
//			if(j==vc) continue;
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//}
