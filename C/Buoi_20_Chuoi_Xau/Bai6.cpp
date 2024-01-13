//20.06
#include <stdio.h>

int main() {
    char number[1001];
    scanf("%s", number);

    int sum = 0;
    for (int i = 0; number[i] != '\0'; i++) {
        sum += number[i] - '0';
    }

    printf("%d\n", sum);

    return 0;
}

