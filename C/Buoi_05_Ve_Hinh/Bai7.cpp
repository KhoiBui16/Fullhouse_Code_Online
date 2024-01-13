//5.7
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=n;i>0;i--){
		for(int j=n;j>i;j--){
			printf("%d ",j);
		}
		for(int j=1;j<=i;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}




int main() 
{
    int n,k;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        k=n;
        for(int j=0;j<n;++j)
        {
            if(j<=i) printf("%d ",k--);
            else printf("%d ",k+1);
        }
        printf("\n");
    }
    return 0;
}
