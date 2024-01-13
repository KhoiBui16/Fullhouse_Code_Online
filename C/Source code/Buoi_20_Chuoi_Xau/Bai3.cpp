//20.3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char date[11];
    fgets(date, 11, stdin);
    
    // Tách ngày, tháng, nam t? chu?i ngày sinh
    char* token = strtok(date, "/");
    int day = atoi(token);
    
    token = strtok(NULL, "/");
    int month = atoi(token);
    
    token = strtok(NULL, "/");
    int year = atoi(token);
    
    // Chu?n hóa ngày sinh v? d?ng dd/mm/yyyy
    char formatted_date[11];
    sprintf(formatted_date, "%02d/%02d/%04d", day, month, year);
    
    printf("%s\n", formatted_date);
    
    return 0;
}

