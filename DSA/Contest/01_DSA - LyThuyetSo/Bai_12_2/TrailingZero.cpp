#include <iostream>
#define ll long long
using namespace std;

#define ll long long

ll legendre(ll n, int p){
	ll res = 0;
	for(ll i = p; i <= n; i *= p){
		res += n / i;
	}
	return res;
}

int main(){
	ll n; cin >> n;
	cout << legendre(n, 5) << endl;
	return 0;
}