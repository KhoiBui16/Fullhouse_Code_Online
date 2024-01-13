#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//// �?nh nghia ki?u d? li?u Employee
//struct employee {
//	char id[6];
//    char name[41];
//    char gender[4];
//    char birthday[11];
//    char address[101];
//    char taxcode[11];
//    char contractdate[11];
//};

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

// H�m chu?n h�a ng�y sinh v? d?ng dd/mm/yyyy
void normalizeDate(char date[]) {
    int day = atoi(strtok(date, "/"));
	int month = atoi(strtok(NULL, "/"));
	int year = atoi(strtok(NULL, "/"));
	char format_date[11];
	sprintf(format_date,"%02d/%02d/%0004d", day, month, year);
	strcpy(date,format_date);
}

void input_employee(struct employee &emp) {
    static int next_id = 0; // T?o m� nh�n vi�n t? d?ng tang
    
    sprintf(emp.id, "%00005d", ++next_id); // G�n m� nh�n vi�n
    
//    printf("\nNhap ten: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    // strcspn: tim k� tu \n dau tien trong chuoi
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

// H�m so s�nh hai nh�n vi�n
int compare(const void *a, const void *b) {
    struct employee *ea = (struct employee *) a;
    struct employee *eb = (struct employee *) b;

    // So s�nh theo ng�y sinh t? l?n d?n nh?
    int result = strcmp(eb->dob, ea->dob);
    if (result != 0) {
        return result;
    }

    // N?u c�ng ng�y sinh th� so s�nh theo m� s? t? nh? d?n l?n
    return strcmp(ea->taxcode, eb->taxcode);
}

int main() {
    int n;
    scanf("%d", &n);

    // Kh?i t?o danh s�ch nh�n vi�n
    struct Employee employees[n];
    for (int i = 0; i < n; i++) {
        input_employee(employees[i]);
    }

    // S?p x?p danh s�ch nh�n vi�n
    qsort(employees, n, sizeof(struct Employee), compare);

    // In danh s�ch nh�n vi�n d� s?p x?p
    for (int i = 0; i < n; i++) {
        printf("%s %s %s %s %s %s\n", employees[i].name, employees[i].gender, employees[i].birthday,
               employees[i].address, employees[i].taxcode, employees[i].contractdate);
    }

    return 0;
}

