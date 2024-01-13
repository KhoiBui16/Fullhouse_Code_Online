//2.16  c1
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int nam=n/365;
	int tuan=(n-nam*365)/7;
	int ngay=n-nam*365-tuan*7;
	printf("%d %d %d",nam,tuan,ngay);
	return 0;
}



//1.29  c2
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int nam=n/365;
	int tuan=(n%365)/7;
	int ngay=(n%365)%7;
	printf("%d %d %d",nam,tuan,ngay);
	return 0;
}
