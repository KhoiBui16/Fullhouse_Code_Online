//22.2
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct SinhVien {
	char maSV[50];
	char hoTen[200];
	char lop[50];
	char email[200];
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

void nhapThongTin(struct SinhVien &sv){
	scanf("%s", sv.maSV);
	getchar();
	fgets(sv.hoTen, sizeof(sv.hoTen), stdin);
	sv.hoTen[strcspn(sv.hoTen, "\n")] = '\0';
	chuanHoaTen(sv.hoTen);
	scanf("%s", sv.lop);
	scanf("%s", sv.email);
	getchar();
}

int main() {
	int n;
	scanf("%d", &n);
	getchar();

	struct SinhVien sv[n];
	for (int i = 0; i < n; i++) {
		nhapThongTin(sv[i]);
	}
	
	int t;
	scanf("%d", &t);
	char nganh[5];
	while (t--) {
		scanf("%s", nganh);
		if (strcmp(nganh, "DTVT") == 0) {
			printf("DANH SACH SINH VIEN NGANH DIEN TU VIEN THONG :\n");
			for (int i = 0; i < n; i++) {
				if (strncmp(sv[i].lop, "DTVT", 4) == 0) {
					printf("%s %s %s %s\n", sv[i].maSV, sv[i].hoTen, sv[i].lop, sv[i].email);
				}
			}
		} else if (strcmp(nganh, "CNTT") == 0) {
			printf("DANH SACH SINH VIEN NGANH CONG NGHE THONG TIN :\n");
			for (int i = 0; i < n; i++) {
				if (strncmp(sv[i].lop, "CNTT", 4) == 0) {
					printf("%s %s %s %s\n", sv[i].maSV, sv[i].hoTen, sv[i].lop, sv[i].email);
				}
			}
		} else if (strcmp(nganh, "KT") == 0) {
			printf("DANH SACH SINH VIEN NGANH KE TOAN :\n");
			for (int i = 0; i < n; i++) {
				if (strncmp(sv[i].lop, "KT", 2) == 0) {
					printf("%s %s %s %s\n", sv[i].maSV, sv[i].hoTen, sv[i].lop, sv[i].email);
				}
			}
		} else if (strcmp(nganh, "MKT") == 0) {
			printf("DANH SACH SINH VIEN NGANH MARKETING :\n");
			for (int i = 0; i < n; i++) {
				if (strncmp(sv[i].lop, "MKT", 3) == 0) {
					printf("%s %s %s %s\n", sv[i].maSV, sv[i].hoTen, sv[i].lop, sv[i].email);
				}
			}
		}
	}

	return 0;
}

