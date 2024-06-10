#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, a[1001], b[1001], check[1001], sum = 0;

void Try(int i,int pos){
	for(int j = pos;j <= n;j++){
		b[i] = a[j];
		sum += a[j];
		if(sum == k){
			for(int j = 1;j <= i;j++){
				cout << b[j] << " ";
			}
			cout << endl;
		}
		else{
			Try(i+1,j+1);
		}
		sum -= a[j];
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		memset(check,0,sizeof(check));
		for(int i = 1;i <= n;i++){
			cin >> a[i];
		}
		sort(a+1,a+n+1);
		Try(1,1);
	}
    return 0;
}