//22.5
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Khai báo l?p Sinh Viên
struct SinhVien {
    char maSV[7];
    char hoTen[51];
    char lop[11];
    char ngaySinh[11];
    float diemGPA;
};

void chuanTen(char ten[]){
	ten[0] = toupper(ten[0]);
	for(int i = 1; i < strlen(ten); ++i)
		ten[i] = tolower(ten[i]);
}

void chuanHoaTen(char hoTen[]) {
	char ht[51];
    char *token = strtok(hoTen," ");
    while(token != NULL){
    	chuanTen(token);
    	strcat(ht, token);
    	token = strtok(NULL," ");
    	if(token != NULL){
    		strcat(ht, " ");
		}
	}
	strcpy(hoTen,ht);
}


// Hàm chu?n hóa ngày sinh v? d?ng dd/mm/yyyy
void chuanHoaNgaySinh(char date[]) {
    int day = atoi(strtok(date, "/"));
	int month = atoi(strtok(NULL, "/"));
	int year = atoi(strtok(NULL, "/"));
	char format_date[11];
	sprintf(format_date,"%02d/%02d/%0004d", day, month, year);
	strcpy(date,format_date);
}


int main() {
    struct SinhVien sv;  // Kh?i t?o bi?n sv ki?u SinhVien
    
    strcpy(sv.maSV, "SV001");  // Gán mã sinh viên là SV001
    fgets(sv.hoTen, 51, stdin);  // Ð?c chu?i h? tên t? bàn phím
    sv.hoTen[strcspn(sv.hoTen, "\n")] = 0;  // Lo?i b? kí t? xu?ng dòng th?a
    chuanHoaTen(sv.hoTen);  // Chu?n hóa h? tên v? d?ng chu?n (ví d?: Nguyen Van A)
    
	scanf("%s", sv.lop);  // Ð?c chu?i l?p t? bàn phím
    
	scanf("%s", sv.ngaySinh);  // Ð?c chu?i ngày sinh t? bàn phím
    chuanHoaNgaySinh(sv.ngaySinh);  // Chu?n hóa ngày sinh v? d?ng dd/mm/yyyy
    scanf("%f", &sv.diemGPA);  // Ð?c di?m GPA t? bàn phím
    
	printf("%s %s %s %s %.1f", sv.maSV, sv.hoTen, sv.lop, sv.ngaySinh, sv.diemGPA);  // In ra thông tin sinh viên
    return 0;
}

