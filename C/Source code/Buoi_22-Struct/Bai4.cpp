//21.7
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

struct employee {
	//khai du 2 so vi chua ca \n va \0
    char id[6];   
    char name[42];
    char gender[5];
    char dob[12];
    char address[102];
    char tax_id[12];
    char contract_date[12];
};

// Hàm chu?n hóa ngày sinh v? d?ng dd/mm/yyyy
void normalizeDate(char date[]) {
    int day = atoi(strtok(date, "/"));
	int month = atoi(strtok(NULL, "/"));
	int year = atoi(strtok(NULL, "/"));
	char format_date[11];
	sprintf(format_date,"%02d/%02d/%0004d", day, month, year);
	strcpy(date,format_date);
}

void input_employee(struct employee &emp) {
    static int next_id = 0; // T?o mã nhân viên t? d?ng tang
    
    sprintf(emp.id, "%00005d", ++next_id); // Gán mã nhân viên
    
//    printf("\nNhap ten: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    // strcspn: tim kí tu \n dau tien trong chuoi
    // gan no bang ki tu \0
    emp.name[strcspn(emp.name, "\n")] = '\0';
    
//    printf("\nNhap gioi tinh: ");
    fgets(emp.gender, sizeof(emp.gender), stdin);
    emp.gender[strcspn(emp.gender, "\n")] = '\0';
    
//    printf("\nNhap ngay sinh: ");
    fgets(emp.dob, sizeof(emp.dob), stdin);
    emp.dob[strcspn(emp.dob, "\n")] = '\0';
    normalizeDate(emp.dob);
    
//    printf("\nNhap dia chi: ");
    fgets(emp.address, sizeof(emp.address), stdin);
    emp.address[strcspn(emp.address, "\n")] = '\0';
    
//     printf("\nNhap id: ");
    fgets(emp.tax_id, sizeof(emp.tax_id), stdin);
    emp.tax_id[strcspn(emp.tax_id, "\n")] = '\0';
    
    fgets(emp.contract_date, sizeof(emp.contract_date), stdin);
    emp.contract_date[strcspn(emp.contract_date, "\n")] = '\0';
    normalizeDate(emp.contract_date);
}

void print_employee(struct employee emp) {
    printf("%s %s %s %s %s %s %s\n", emp.id, emp.name, emp.gender, emp.dob, emp.address, emp.tax_id, emp.contract_date);
}

int compare_dob(const void *a, const void *b) {
    struct employee *emp1 = (struct employee *)a;
    struct employee *emp2 = (struct employee *)b;
    // L?y nam, tháng, ngày c?a ngày sinh
    int year1, year2, month1, month2, day1, day2;
    sscanf(emp1->dob, "%d/%d/%d", &day1, &month1, &year1);
    sscanf(emp2->dob, "%d/%d/%d", &day2, &month2, &year2);
    // So sánh nam sinh
    if (year1 != year2) {
        return year1 - year2; // Ngu?i l?n tu?i hon s? d?ng tru?c
    }
    // So sánh tháng sinh
    if (month1 != month2) {
        return month1 - month2; // Ngu?i l?n tu?i hon s? d?ng tru?c
    }
    // So sánh ngày sinh
    if (day1 != day2) {
        return day1 - day2; // Ngu?i l?n tu?i hon s? d?ng tru?c
    }
    // Cùng ngày sinh thì so sánh theo mã nhân viên
    int id1 = atoi(emp1->id);
    int id2 = atoi(emp2->id);
    return id1 - id2;
}


int main() {
    int n;
    scanf("%d", &n);
    getchar(); // Xóa kí t? '\n' th?a
    struct employee employees[n];
    
    for (int i = 0; i < n; i++) {
        input_employee(employees[i]);
    }
    
    qsort(employees, n, sizeof(struct employee), compare_dob);
    
    for (int i = 0; i < n; i++) {
        print_employee(employees[i]);
    }
    
    return 0;
}

