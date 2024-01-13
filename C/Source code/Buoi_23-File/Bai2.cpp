//23.2
#include <stdio.h>

int main() {
    FILE *file = fopen("FH.txt", "r");
    char c;
    while ((c = fgetc(file)) != EOF) {
        printf("%c", c);
    }
    fclose(file);

    return 0;
}

