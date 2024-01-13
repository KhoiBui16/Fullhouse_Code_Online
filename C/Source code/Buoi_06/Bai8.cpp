//6.8
#include <stdio.h>
#define ll long long

ll greatestCommonDivisor(ll a, ll b){
	while(a != b){
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}

ll leatCommonMultiple(ll a, ll b){
	// GCD la uoc cua a nen a chia het cho GCD
	return a/greatestCommonDivisor(a,b) * b;
}

int main(){
	ll a,b;
	scanf("%lld%lld",&a,&b);
	printf("%lld %lld",greatestCommonDivisor(a,b), leatCommonMultiple(a,b));
}



