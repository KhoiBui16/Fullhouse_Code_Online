//20.10
#include <stdio.h>

int main() {
    char str[1001];
    scanf("%s", str);

    int i = 0, sum = 0;
    while (str[i] != '\0') {
        sum += str[i] - '0'; // chuy?n k� t? th�nh s? v� c?ng v�o sum
        i++;
    }

    if (sum % 3 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

