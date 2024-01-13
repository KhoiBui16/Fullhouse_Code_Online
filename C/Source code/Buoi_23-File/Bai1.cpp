//23.1
#include <stdio.h>

int main() {
    // T?o file FH.txt
    FILE *file = fopen("FH.txt", "w");

    // Ghi d? li?u vào file
    char data[50];
    fgets(data, 50, stdin);
    fprintf(file, "%s", data);

    // Ðóng file
    fclose(file);
    return 0;
}

