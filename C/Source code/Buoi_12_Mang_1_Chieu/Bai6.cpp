//12.16   c1
#include <stdio.h>

int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            return 1;
        } else if (arr[mid] > x) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return 0;
}

int main() {
    int n, t;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &t);
    while (t--) {
        int x;
        scanf("%d", &x);
        if (binarySearch(arr, 0, n-1, x)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}


//c2
#include <stdio.h>

int binarySearch(int arr[], int low, int high, int x) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            return 1;
        } else if (arr[mid] > x) {
            return binarySearch(arr, low, mid-1, x);
        } else {
            return binarySearch(arr, mid+1, high, x);
        }
    }
    return 0;
}

int main() {
    int n, t;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &t);
    while (t--) {
        int x;
        scanf("%d", &x);
        if (binarySearch(arr, 0, n-1, x)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}


