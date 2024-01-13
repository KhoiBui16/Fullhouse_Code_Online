//11.14 c1
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	} 
	int sl1=0,sl2,vt=0;
	for(int i=0;i<n;++i){
		sl2=0;
		for(int j=0;j<n;++j){
			if(a[j]==a[i]) sl2++;
		}
		if(sl1<sl2) sl1=sl2, vt=i;
	}
	printf("%d %d",a[vt],sl1);
}


//11.14 c2
#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];     
	int b[100001]; 
	memset(b,0,sizeof(b));
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	} 
	int max=a[0],sl=0;
	for(int i=0;i<n;++i){
		b[a[i]]++;
		if(sl<b[a[i]]) {
			sl=b[a[i]];
			max=a[i];
		}
	}
	printf("%d %d",max,sl);
}
