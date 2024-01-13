#include <stdio.h>

void nhap(int a[], int n){
	for(int i = 0; i < n; ++i){
		scanf("%d",&a[i]);
	}
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n1, n2, n3;
		scanf("%d%d%d",&n1,&n2,&n3);
		int a[n1], b[n2], c[n3];
		nhap(a,n1);
		nhap(b,n2);
		nhap(c,n3);
		int i = 0, j = 0, k = 0, check = 1;
		while (i < n1 && j < n2 && k < n3){
			if(a[i] == b[j] && b[j] == c[k]){
				printf("%d ",a[i]);
				check = 0;
				++i; ++j; ++k;
			}
			while(a[i] < b[j]) ++i;
			while(b[j] < c[k]) ++j;
			while(c[k] < a[i]) ++k;
		}
		if(check) printf("-1");
		printf("\n");
	}
}
