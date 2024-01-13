//22.5
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Khai b�o l?p Sinh Vi�n
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


// H�m chu?n h�a ng�y sinh v? d?ng dd/mm/yyyy
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
    
    strcpy(sv.maSV, "SV001");  // G�n m� sinh vi�n l� SV001
    fgets(sv.hoTen, 51, stdin);  // �?c chu?i h? t�n t? b�n ph�m
    sv.hoTen[strcspn(sv.hoTen, "\n")] = 0;  // Lo?i b? k� t? xu?ng d�ng th?a
    chuanHoaTen(sv.hoTen);  // Chu?n h�a h? t�n v? d?ng chu?n (v� d?: Nguyen Van A)
    
	scanf("%s", sv.lop);  // �?c chu?i l?p t? b�n ph�m
    
	scanf("%s", sv.ngaySinh);  // �?c chu?i ng�y sinh t? b�n ph�m
    chuanHoaNgaySinh(sv.ngaySinh);  // Chu?n h�a ng�y sinh v? d?ng dd/mm/yyyy
    scanf("%f", &sv.diemGPA);  // �?c di?m GPA t? b�n ph�m
    
	printf("%s %s %s %s %.1f", sv.maSV, sv.hoTen, sv.lop, sv.ngaySinh, sv.diemGPA);  // In ra th�ng tin sinh vi�n
    return 0;
}

