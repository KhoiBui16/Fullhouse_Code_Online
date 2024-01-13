#include <stdio.h>
#include <ctype.h>
#include <string.h>

void nomorlizeName(char key[]){
	key[0] = toupper(key[0]);
	for (int i = 1; i < strlen(key); i++) {
        key[i] = tolower(key[i]);
    }
}

int main() {
    FILE *input = fopen("Name.txt", "r");
    FILE *output = fopen("Convert.txt", "w");
    char name[100];
    char *first, *last, *middle;
    
    while (fgets(name, 100, input) != NULL) {
        // Chu?n hóa tên ngu?i
        first = strtok(name, " ");
        middle = strtok(NULL, " ");
        last = strtok(NULL, " \n");
        
        nomorlizeName(first);
        
        if (middle != NULL) {
        	nomorlizeName(middle);
        }
        nomorlizeName(last);
        
        // Luu vào file m?i
        fprintf(output, "%s ", first);
        if (middle != NULL) {
            fprintf(output, "%s ", middle);
        }
        fprintf(output, "%s\n", last);
    }
    
    // S?p x?p file m?i theo th? t? t? di?n
    fclose(output);
    output = fopen("Convert.txt", "r");
    char lines[100][100];
    int count = 0;
    
    while (fgets(lines[count], 100, output) != NULL) {
        count++;
    }
    
	for (int i = 0; i < count; i++) {
        for (int j = i+1; j < count; j++) {
            char first_i[100], middle_i[100], last_i[100];
            char first_j[100], middle_j[100], last_j[100];
            sscanf(lines[i], "%s %s %[^\n]s", first_i, middle_i, last_i);
            sscanf(lines[j], "%s %s %[^\n]s", first_j, middle_j, last_j);
            int cmp_first = strcmp(first_i, first_j);
            int cmp_middle = strcmp(middle_i, middle_j);
            int cmp_last = strcmp(last_i, last_j);
            if (cmp_last > 0 || (cmp_last == 0 && cmp_middle > 0) ||
                (cmp_last == 0 && cmp_middle == 0 && cmp_first > 0)) {
                char temp[100];
                strcpy(temp, lines[i]);
                strcpy(lines[i], lines[j]);
                strcpy(lines[j], temp);
            }
        }
    }
    
    fclose(input);
    fclose(output);
    output = fopen("Convert.txt", "w");
    
    for (int i = 0; i < count; i++) {
        fprintf(output, "%s", lines[i]);
    }
    
    fclose(output);
    return 0;
}

