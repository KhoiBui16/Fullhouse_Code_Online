//15.6
#include <stdio.h>

void sort_column(int arr[][200], int n, int col) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[j][col] < arr[i][col]) {
                int temp = arr[i][col];
                arr[i][col] = arr[j][col];
                arr[j][col] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[200][200];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
	for (int col = 0; col < n; col++) {
        sort_column(arr, n, col);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

