//20.3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char date[11];
    fgets(date, 11, stdin);
    
    // T�ch ng�y, th�ng, nam t? chu?i ng�y sinh
    char* token = strtok(date, "/");
    int day = atoi(token);
    
    token = strtok(NULL, "/");
    int month = atoi(token);
    
    token = strtok(NULL, "/");
    int year = atoi(token);
    
    // Chu?n h�a ng�y sinh v? d?ng dd/mm/yyyy
    char formatted_date[11];
    sprintf(formatted_date, "%02d/%02d/%04d", day, month, year);
    
    printf("%s\n", formatted_date);
    
    return 0;
}

