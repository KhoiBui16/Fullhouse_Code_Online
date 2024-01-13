//12.7
#include <stdio.h>

void merge(int arr1[], int n, int arr2[], int m, int merged_arr[]) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            merged_arr[k++] = arr1[i++];
        } else {
            merged_arr[k++] = arr2[j++];
        }
    }
    while (i < n) {
        merged_arr[k++] = arr1[i++];
    }
    while (j < m) {
        merged_arr[k++] = arr2[j++];
    }
}

int main() {
    int n, m;
    scanf("%d%d", &n,&m);
    int arr1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    int arr2[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }
    int merged_arr[n + m];
    merge(arr1, n, arr2, m, merged_arr);
    for (int i = 0; i < n + m; i++) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");
    return 0;
}

