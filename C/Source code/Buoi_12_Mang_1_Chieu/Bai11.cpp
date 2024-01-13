//12.11
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    int p[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    qsort(p, n, sizeof(int), cmp);

    int i = 0, j = n - 1;
    int count = 0;
    while (i <= j) {
        if (p[i] + p[j] <= x) {
            i++;
        }
        j--;
        count++;
    }

    printf("%d\n", count);

    return 0;
}

