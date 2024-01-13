//21.4
#include <stdio.h>
#include <string.h>

struct Teacher {
    char code[5];
    char name[50];
    long salary;
};

int main() {
    struct Teacher t;
    int salary_coefficient;
    long allowance;

    // Nh?p thông tin giáo viên
    scanf("%s", t.code);

    scanf(" %[^\n]s", t.name);

    scanf("%ld", &t.salary);

    // Tính b?c luong và ph? c?p
    salary_coefficient = t.code[3] - '0';
    allowance = 0;
    if (strncmp(t.code, "HT", 2) == 0) {
        allowance = 2000000;
    } else if (strncmp(t.code, "HP", 2) == 0) {
        allowance = 1000000;
    } else if (strncmp(t.code, "GV", 2) == 0) {
        allowance = 500000;
    }

    // In thông tin giáo viên
    printf("%s ", t.code);
    printf("%s ", t.name);
    printf("%d ", salary_coefficient);
    printf("%ld", t.salary * salary_coefficient + allowance);

    return 0;
}

