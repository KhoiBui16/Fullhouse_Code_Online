//13.02
#include <stdio.h>


void out(int A[], int n){
	int j;
	for (j = 0; j < n; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");
}

void selection_sort(int A[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (A[j] < A[i]) {
                int tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
	    
        printf("Buoc %d: ", i + 1);
        out(A,n);
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int A[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    selection_sort(A, n);
    return 0;
}

