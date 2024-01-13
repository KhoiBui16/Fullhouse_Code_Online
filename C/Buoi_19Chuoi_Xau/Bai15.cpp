//19.15
#include <stdio.h>
#include <string.h>

int main() {
    char s1[1001], s2[1001];
    int freq1[26] = {0}, freq2[26] = {0}; // m?ng t?n s? c?a hai xâu

    // Nh?p xâu S1
    fgets(s1, sizeof(s1), stdin);

    // Tang t?n s? cho m?i ký t? trong S1
    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] >= 'a' && s1[i] <= 'z') {
            freq1[s1[i] - 'a']++;
        }
    }

    // Nh?p xâu S2
    fgets(s2, sizeof(s2), stdin);

    // Tang t?n s? cho m?i ký t? trong S2
    for (int i = 0; i < strlen(s2); i++) {
        if (s2[i] >= 'a' && s2[i] <= 'z') {
            freq2[s2[i] - 'a']++;
        }
    }

    // In ra các ký t? xu?t hi?n ? c? hai xâu theo th? t? t? di?n
    for (int i = 0; i < 26; i++) {
        if (freq1[i] > 0 && freq2[i] > 0) {
            printf("%c", i + 'a');
        }
    }
	
	printf("\n");
	
    // In ra các ký t? xu?t hi?n ? m?t trong hai xâu theo th? t? t? di?n
    for (int i = 0; i < 26; i++) {
        if (freq1[i] > 0 || freq2[i] > 0) {
            printf("%c", i + 'a');
        }
    }

    return 0;
}

