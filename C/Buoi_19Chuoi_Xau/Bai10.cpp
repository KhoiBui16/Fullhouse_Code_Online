//19.10
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1001]; // khai báo m?ng char d? luu tr? xâu d?u vào
    int letter_count = 0, digit_count = 0, special_count = 0;
    int i = 0;

    // nh?p xâu d?u vào
    fgets(s, 1001, stdin);

    // duy?t qua t?ng ký t? trong xâu và d?m s? lu?ng các lo?i ký t?
    while (s[i] != '\0') {
        if (isalpha(s[i])) { // n?u là ch? cái
            letter_count++;
        } else if (isdigit(s[i])) { // n?u là ký t? s?
            digit_count++;
        } else if (s[i] != '\n') { // n?u là ký t? d?c bi?t
            special_count++;
        }
        i++;
    }

    // in k?t qu?
    printf("%d %d %d", letter_count, digit_count, special_count);

    return 0;
}

