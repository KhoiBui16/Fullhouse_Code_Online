//13.1
#include <stdio.h>


void out(int A[], int n){
	int j;
	for (j = 0; j < n; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");
}

void selection_sort(int A[], int n) {
    int i, j, min_index;
    for (i = 0; i < n - 1; i++) {
        min_index = i;
        for (j = i + 1; j < n; j++) {
            if (A[j] < A[min_index]) {
                min_index = j;
            }
        }
        int temp = A[i];
	    A[i] = A[min_index];
	    A[min_index] = temp;
	    
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

