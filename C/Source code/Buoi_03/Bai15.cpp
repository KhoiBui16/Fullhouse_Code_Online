//3.15
#include <stdio.h>

int main(){
	int n; 
	scanf("%d",&n);
	int dem1=0, dem2=0;
	for(int i=1;i<=n;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		if(a>b) dem1++;
		else if(b>a) dem2++;
	}
	if(dem1>dem2) printf("Mishka");
	else if(dem1<dem2) printf("Chris");
	else printf("Friendship is magic! ^^");
	return 0;
}

