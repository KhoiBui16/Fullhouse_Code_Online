//19.10
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1001]; // khai b�o m?ng char d? luu tr? x�u d?u v�o
    int letter_count = 0, digit_count = 0, special_count = 0;
    int i = 0;

    // nh?p x�u d?u v�o
    fgets(s, 1001, stdin);

    // duy?t qua t?ng k� t? trong x�u v� d?m s? lu?ng c�c lo?i k� t?
    while (s[i] != '\0') {
        if (isalpha(s[i])) { // n?u l� ch? c�i
            letter_count++;
        } else if (isdigit(s[i])) { // n?u l� k� t? s?
            digit_count++;
        } else if (s[i] != '\n') { // n?u l� k� t? d?c bi?t
            special_count++;
        }
        i++;
    }

    // in k?t qu?
    printf("%d %d %d", letter_count, digit_count, special_count);

    return 0;
}

