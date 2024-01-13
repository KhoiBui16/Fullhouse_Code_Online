//2.12
//c1
#include <stdio.h>

int main() {
	char n;
	scanf("%c",&n);

	// truong hop dac biet
	if(n == 'Z' || n == 'z') {
		printf("a");
		//Kiem tra ki tu hoa
	} else if(n >= 'A' && n <= 'Z') {
		// chuyen ve thuong (+32) va ktu tiep theo (+1)
		printf("%c",n + 32 + 1);
		// Kiem tra ki tu thuong
	} else if(n >= 'a' && n <= 'z') {
		// in ra ktu tiep theo (+1)
		printf("%c",n + 1);
		// Khong phai ki tu
	} else {
		printf("INVALID");
	}
	return 0;
}




//c2
#include <stdio.h>

int main(){
	char a;
	scanf("%c",&a);
	if(a=='z'||a=='Z') printf("a");
	else{
		a += (a>='A'&&a<='Z') ? 33 : 1;
		if(a>='b'&&a<='z') printf("%c",a);
		else printf("INVALID");
	}
	return 0;
}

