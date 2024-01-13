#include <stdio.h>

void out(int A[], int n){
	int j;
	for (j = 0; j < n; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");
}


void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
			    arr[j] = arr[j+1];
			    arr[j+1] = temp;
            }
        }
        // In ra m?ng sau m?i bu?c s?p x?p
        printf("Buoc %d: ", i+1);
        out(arr,n);
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    return 0;
}

