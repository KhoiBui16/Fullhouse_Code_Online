//12.5
#include <stdio.h>
#include <stdbool.h>

//#define MAX_VAL 100
#define MAX_VAL 10000000

void countFrequency(int* arr, int n) {
    int freq[MAX_VAL+1] = {0};
    bool printed[MAX_VAL+1] = {false};

    // t?o m?ng t?n su?t và d?m s? l?n xu?t hi?n c?a t?ng ph?n t? trong m?ng
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // in ra t?n su?t xu?t hi?n c?a các ph?n t? theo th? t? t? nh? d?n l?n
    for (int i = 0; i <= MAX_VAL; i++) {
        if (freq[i] > 0) {
            printf("%d %d\n", i, freq[i]);
        }
    }
	printf("\n");
    // in ra t?n su?t xu?t hi?n c?a các ph?n t? theo th? t? xu?t hi?n trong m?ng
    for (int i = 0; i < n; i++) {
        if (!printed[arr[i]]) {
            printf("%d %d\n", arr[i], freq[arr[i]]);
            printed[arr[i]] = true;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    countFrequency(arr, n);
    return 0;
}

