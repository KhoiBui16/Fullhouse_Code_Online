//20.5
#include <stdio.h>
#include <string.h>

int main() {
    char S[1000], T[1000];
    scanf("%[^\n]%*c", S);  // d?c x�u S, lo?i b? k� t? '\n' ? cu?i
    scanf("%[^\n]%*c", T);  // d?c x�u T, lo?i b? k� t? '\n' ? cu?i
    
    // ki?m tra x�u T c� t?n t?i trong x�u S kh�ng
    if (strstr(S, T) != NULL) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}

