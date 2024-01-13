//12.2 c1
#include <stdio.h>

int main (){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for (int i = 0; i < n; ++i){
		scanf("%d",&a[i]);
	}
	int max1 = a[0], max2 = a[1];
	for (int i = 1; i < n; ++i){
		if (a[i] > max1){
			max2 = max1;
			max1 = a[i];
		}
		else if (a[i] > max2 && a[i] != max1) max2 = a[i];
	}
	for(int i=0;i<n;++i){
		if(a[i]<max2) printf("%d ",a[i]);
	}
	return 0;
}








//bai 12.2 c2
#include <stdio.h>

int main (){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for (int i = 0; i < n; ++i){
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < n; ++i){
		int dem=0;
		for(int j=0;j<n;++j){
			if(a[i]<a[j]) dem++;
		}
		if(dem>=2) printf("%d ",a[i]);
	}	
	return 0;
}
