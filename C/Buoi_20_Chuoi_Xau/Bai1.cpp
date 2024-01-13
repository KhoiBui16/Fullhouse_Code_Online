//20.1
#include <stdio.h>
#include <string.h>

bool isPalindrome(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        if (str[i] != str[len-i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[1000];
    fgets(str, 1000, stdin);
    
    char* token = strtok(str, " \n");
    while (token != NULL) {
        if (isPalindrome(token)) {
            printf("%s ", token);
        }
        token = strtok(NULL, " \n");
    }
    
    return 0;
}

