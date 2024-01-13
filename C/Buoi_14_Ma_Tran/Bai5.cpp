//11.5  c1
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n], b[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Chuy?n ma tr?n t? hàng thành c?t
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            b[j][i] = a[i][j];
        }
    }

    // In ma tr?n sau khi chuy?n
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}




//c2
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j) scanf("%d",&a[i][j]);
	}
	
	int t=0;
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}

