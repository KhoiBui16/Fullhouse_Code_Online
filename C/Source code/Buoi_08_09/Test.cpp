#include<stdio.h>
#include<math.h>

int solve(int n,int k) {
	int cnt=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				n/=i;
				++cnt;
				if(cnt==k) return i;
			}
		}
	}
	if(n!=1)
		++cnt;
	if(cnt==k) return n;
	return -1;
}

int main() {
	int n,k;
	scanf("%d %d",&n,&k);
	printf("%d",solve(n,k));
}
