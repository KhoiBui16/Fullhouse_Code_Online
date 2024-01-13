//7.7
#include <stdio.h>
#include <math.h>

int checkSphenic(long long n){
	int cnt_2 = 0;
	for (int i = 2; i <= sqrt(n); ++i){
		if(!(n % i)){
			int cnt = 0;
			cnt_2 += 1;
			while(!(n % i)){
				++cnt;
				n /= i;
			}
			if(cnt > 1)
				return 0;
		}
	}
	if(n != 1) ++cnt_2;
	return cnt_2 == 3;
}

int main(){
	long long n;
	scanf("%lld",&n);
	if(checkSphenic(n) == 1){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}
