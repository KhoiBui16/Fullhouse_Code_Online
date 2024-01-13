//11.6
#include <stdio.h>

int isPalindrome(int n) {
    int reverse = 0, temp = n;
    while (temp > 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    return (reverse == n);
}


int main() {
    int n;
    scanf("%d", &n);

    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if(isPalindrome(a[i][j]))
            	++count;
        }
    }

    printf("%d\n", count);

    return 0;
}



