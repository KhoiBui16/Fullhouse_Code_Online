/*
    - neu he thong chuan [1, 2, 5] => thi dung tham lam
    - he thong khong chuan thi dung quy hoach dong
    - vi du: s = 6 - tong tien can doi,  tu mang c[1, 2, 4, 7] menh gia tien
        + xay dung cac bai toan con tu DP : S[0,1,2,3,4,5,6]
        + ban dau thi gan la vo cung
        + duyet qua cac tong DP[i] => duyet qua tat ca cac to tien xem coi doi duoc hay ko
            _ dieu kien de doi la if (Si >= c[i]) : DP[Si] = min(DP[i], DP[Si - c] + 1)
                                                        = min(DP[chinh no hien tai], DP[Si - c] + 1 to hien tai)
*/

#include <iostream>
#include <algorithm>
using namespace std;

int const maxn = 10000001;
int const INF = 1e9;
int n, s, dp[maxn];

int main()
{
    cin >> n >> s;
    int c[n];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    dp[0] = 0;
    for (int i = 1; i <= s; i++)   // duyet qua cac tong si
    {
        dp[i] = INF; // ban dau cho tat ca la 1e9
        for (int j = 0; j < n; j++)
        {
            if (i >= c[j])
                dp[i] = min(dp[i], dp[i - c[j]] + 1);
        }
    }
    if (dp[s] != INF)
        cout << dp[s];
    else
        cout << -1;
    return 0;
}
