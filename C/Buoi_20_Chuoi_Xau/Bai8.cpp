//20.8
#include <stdio.h>
#include <string.h>

int isBeautifulNumber(char* num) {
    int n = strlen(num);
    int increasing = 1, decreasing = 1;
    for(int i=0; i<n-1; i++) {
        if(num[i] > num[i+1]) {
            increasing = 0;
        }
        if(num[i] < num[i+1]) {
            decreasing = 0;
        }
    }
    if(increasing || decreasing) {
        return 1;
    }
    return 0;
}

int main() {
    char num[1001];
    scanf("%s", num);
    if(isBeautifulNumber(num)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

