//19.14
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1001];
    int freq[300] = {0}; // m?ng luu tr? t?n s? c?a các ký t?

    // Nh?p xâu kí t?
    fgets(s, sizeof(s), stdin);

    int max_freq = 0;
    char max_char;
    for (int i = 0; i < strlen(s)-1; i++) {
        freq[s[i]]++;
        if (freq[s[i]] > max_freq) {
            max_freq = freq[s[i]];
            max_char = s[i];
        }
        else if(freq[s[i]] == max_freq){
        	if(s[i] > max_char){
        		max_freq = freq[s[i]];
            	max_char = s[i];
			}
		}
    }

    // In ra k?t qu?
    printf("%c %d", max_char, max_freq);

    return 0;
}

