//21.2
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct SinhVien {
    char hoten[51];
    char ngaysinh[11];
    double diem1;
    double diem2;
    double diem3;
    double tongdiem;
};

void normalizeDate(char date[]){
	int day = atoi(strtok(date, "/"));
	int month = atoi(strtok(NULL, "/"));
	int year = atoi(strtok(NULL, "/"));
	char format_date[11];
	sprintf(format_date,"%02d/%02d/%0004d", day, month, year);
	strcpy(date,format_date);
}

int main() {
    struct SinhVien sv;
    scanf("%[^\n]%*c", sv.hoten);
    scanf("%[^\n]%*c", sv.ngaysinh);
    scanf("%lf%lf%lf", &sv.diem1, &sv.diem2, &sv.diem3);

    // tính t?ng di?m
    sv.tongdiem = sv.diem1 + sv.diem2 + sv.diem3;
    normalizeDate(sv.ngaysinh);

    // in ra thông tin sinh viên
    printf("%s %s %.1lf\n", sv.hoten, sv.ngaysinh, sv.tongdiem);
    return 0;
}

