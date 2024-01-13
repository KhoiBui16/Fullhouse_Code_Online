//19.12
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, n;

    scanf("%s", s);

    n = strlen(s);
    j = n - 1;

    for (i = 0; i < n / 2; i++) {
        if (s[i] != s[j]) {
            printf("NO\n");
            return 0;
        }
        j--;
    }

    printf("YES\n");

    return 0;
}

