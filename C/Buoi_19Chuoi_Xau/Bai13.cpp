//19.13
#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    int freq[26] = {0}; // m?ng luu tr? t?n s? c?a c�c k� t?

    // Nh?p x�u k� t?
    fgets(s, sizeof(s), stdin);

    // Tang t?n s? cho m?i k� t?
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++;
        }
    }
	
    // In ra k?t qu? theo th? t? t? di?n tang d?n
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c %d\n", i + 'a', freq[i]);
        }
    }
	printf("\n");
    // In ra k?t qu? theo th? t? xu?t hi?n trong x�u
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z' && freq[s[i] - 'a'] > 0) {
            printf("%c %d\n", s[i], freq[s[i] - 'a']);
            freq[s[i] - 'a'] = 0; // d�nh d?u d� in k� t? n�y
        }
    }

    return 0;
}

