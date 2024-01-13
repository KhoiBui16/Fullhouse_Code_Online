//20.5
#include <stdio.h>
#include <string.h>

int main() {
    char S[1000], T[1000];
    scanf("%[^\n]%*c", S);  // d?c xâu S, lo?i b? kí t? '\n' ? cu?i
    scanf("%[^\n]%*c", T);  // d?c xâu T, lo?i b? kí t? '\n' ? cu?i
    
    // ki?m tra xâu T có t?n t?i trong xâu S không
    if (strstr(S, T) != NULL) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}

