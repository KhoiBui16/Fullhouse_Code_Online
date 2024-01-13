//10.4
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] & 1) ++odd;
        else ++even;
    }

    printf("%d\n%d", even, odd);

    return 0;
}

