//12.1
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	
	int max1=a[0], max2=a[1], max3=a[2];
	for(int i=0;i<n;++i){
		if(a[i]>max1){
			max3=max2;
			max2=max1;
			max1=a[i]; 
		}else if(a[i]>max2&&i!=0){
			max3=max2;
			max2=a[i];
		}else if(a[i]>max3&&i!=0&&i!=1){
			max3=a[i];
		}
	}
	printf("%d %d %d",max1, max2,max3);
}
