//12.8
#include <stdio.h>

int main()
{
    int n, m, i = 0, j = 0, k = 0, l = 0;
    scanf("%d %d", &n, &m);
    int a[n], b[m], h[n+m], g[n < m ? n : m];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (j = 0; j < m; j++) scanf("%d", &b[j]);
    i = 0;
    j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            h[k++] = a[i++];
        } else if (a[i] > b[j]) {
            h[k++] = b[j++];
        } else {
            h[k++] = a[i];
            g[l++] = a[i];
            i++;
            j++;
        }
    }
    while (i < n) {
        h[k++] = a[i++];
    }
    while (j < m) {
        h[k++] = b[j++];
    }
    for (i = 0; i < k; i++) {
        printf("%d ", h[i]);
    }
    printf("\n");
    for (i = 0; i < l; i++) {
        printf("%d ", g[i]);
    }
    return 0;
}

