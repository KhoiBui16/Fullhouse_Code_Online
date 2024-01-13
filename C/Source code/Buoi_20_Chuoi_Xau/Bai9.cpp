//20.9
#include <stdio.h>
#include <string.h>

int main() {
    char N[1001];
    scanf("%s", N);
    int lastDigit = N[strlen(N) - 1] - '0';
    if (lastDigit % 2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

