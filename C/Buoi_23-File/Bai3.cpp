//23.3
#include <stdio.h>

#define MAX_SIZE 100000

int main() {
    // M? file "inputNumber.txt" d? d?c
    FILE *input_file = fopen("inputNumber.txt", "r");
    if (input_file == NULL) {
        printf("Kh�ng th? m? file inputNumber.txt\n");
        return 1;
    }

    // �?c d? li?u t? file "inputNumber.txt" v�o m?ng
    int numbers[MAX_SIZE];
    int count = 0;
    int number;
    while (fscanf(input_file, "%d", &number) == 1) {
        numbers[count] = number;
        count++;
    }
    fclose(input_file);

    // S?p x?p c�c s? trong m?ng theo th? t? tang d?n
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // Ghi d? li?u d� du?c s?p x?p v�o file "outputNumber.txt"
    FILE *output_file = fopen("outputNumber.txt", "w");
    if (output_file == NULL) {
        printf("Kh�ng th? m? file outputNumber.txt\n");
        return 1;
    }
    for (int i = 0; i < count; i++) {
        fprintf(output_file, "%d ", numbers[i]);
    }
    fclose(output_file);

    return 0;
}

