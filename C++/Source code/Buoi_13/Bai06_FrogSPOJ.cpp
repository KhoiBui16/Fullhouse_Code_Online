/*
    C++ Buổi 13_Bài 06.Frog SPOJ.
    Một con ếch có thể nhảy 1, 2, 3 bước để có thể lên đến một đỉnh cần đến. Hãy đếm số các cách con ếch có thể nhảy đến đỉnh.

    Dữ liệu vào:
    Số nguyên dương N mô tả số bước con ếch cần di chuyển để nhảy tới đỉnh.(1<=N<=40)Vì đáp án sẽ rất lớn nên bạn hãy mode với 1e9+7.

    Dữ liệu ra:
    In ra kết quả của bài toán

    Ví dụ:
    Dữ liệu vào:
    7
    Dữ liệu ra:
    44
*/

#include <iostream>
#include <vector>

using namespace std;

long long mod = (long long)(1e9 + 7);
int main() 
{
	int n; cin >> n;
	vector<long long>dp(n+1);
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i <= n; i++) 
    {
		dp[i] = (dp[i - 1]%mod + dp[i - 2]%mod + dp[i - 3]%mod);
		dp[i] %= mod;
	}
	cout << dp[n];

    return 0;
}