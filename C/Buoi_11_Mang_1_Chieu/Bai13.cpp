//11.13
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int n;
    scanf("%d", &n);

    int max_num = 0;
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        max_num = gcd(max_num, num);
    }

    printf("%d\n", max_num);
    return 0;
}

