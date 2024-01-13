//12.10 sau
#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int n, m, i, j, count = 0;
    scanf("%d%d", &n, &m);
    int a[n], b[m];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    qsort(a, n, sizeof(int), cmp);
    qsort(b, m, sizeof(int), cmp);
    i = 0;
    j = 0;
    while (i < n && j < m) {
        if (a[i] > b[j]) {
            count++;
            i++;
            j++;
        } else {
            i++;
        }
    }
    printf("%d\n", count);
    return 0;
}

