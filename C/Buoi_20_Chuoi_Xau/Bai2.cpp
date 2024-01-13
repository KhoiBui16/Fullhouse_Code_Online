//20.2
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d\n", &n);
    
    for (int i = 0; i < n; i++) {
        char name[1000];
        fgets(name, 1000, stdin);
        
        // Chu?n hóa tên ngu?i
        char* token = strtok(name, " ");
        while (token != NULL) {
            // Vi?t hoa ch? cái d?u c?a t?
            token[0] = toupper(token[0]);
            for (int j = 1; j < strlen(token); j++) {
                token[j] = tolower(token[j]);
            }
            printf("%s ", token);
            token = strtok(NULL, " ");
        }
        printf("\n");
    }
    
    return 0;
}

