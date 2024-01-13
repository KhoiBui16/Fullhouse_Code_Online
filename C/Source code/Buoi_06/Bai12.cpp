//6.12 c1
#include <stdio.h>

int tn(int n){
	int tam=n;
	int tong=0;
	while(n!=0){
		tong=tong*10+n%10;
		n/=10;
	}
	if(tam==tong) return 1;
	return 0;
}

int ktra(int n){
	while(n!=0){
		if(n%10==6) return 1;
		n/=10;
	}
	return 0;
}

int tong(int n){
	int tong=0;
	while(n!=0){
		tong+=n%10;
		n/=10;
	}
	if (tong%10==8) return 1;
	return 0;
}

int main(){
	int a,b, ok = 1;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(tn(i)==1&&tong(i)==1&&ktra(i)==1){
			printf("%d ",i);
			ok = 0;
		}
	}
	if(ok) printf("-1");
	return 0;
}



//6.12 c2
#include <stdio.h>

int ktra_soDep (int n){
	int tam = n, dao = 0;
	int a6 = 0;
	int tongCS = 0;
	
	while (n != 0){
		int x = n % 10;
		
		dao = dao * 10 + x;
		if(x == 6) a6 = 1;
		tongCS += x;
		
		n /= 10;
	}
	
	if(dao == tam && a6 == 1 && tongCS % 10 == 8)
		return 1;
	return 0;
}

int main(){
	int a, b, ok = 1;
	scanf("%d%d",&a,&b);
	for(int i = a; i <= b; ++i){
		if(ktra_soDep(i)){
			printf("%d ",i);
			ok = 0;
		}
	}
	if(ok == 1) printf("-1");
}
