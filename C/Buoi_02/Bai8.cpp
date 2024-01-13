//2.8
#include <stdio.h>

int main(){
	char c;
	scanf("%c",&c);
	if(c>='A'&&c<='Z'||c>='a'&&c<='z')
		printf("YES");
	else printf("NO");
	return 0;
}

