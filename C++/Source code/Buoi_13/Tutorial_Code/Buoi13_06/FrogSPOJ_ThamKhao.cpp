#include <iostream>
#include <vector>

using namespace std;

long long mod = (long long)(1e9 + 7);
int main() {

	int n; cin >> n;
	vector<long long>dp(n+1);
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i <= n; i++) {
		dp[i] = (dp[i - 1]%mod + dp[i - 2]%mod + dp[i - 3]%mod);
		dp[i] %= mod;
	}
	cout << dp[n];

}