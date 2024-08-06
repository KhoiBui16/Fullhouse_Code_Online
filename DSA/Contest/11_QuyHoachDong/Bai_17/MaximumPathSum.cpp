#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m; cin >> n >> m;
    int a[n + 1][m + 1];
    ll dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    dp[1][1] = a[1][1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            dp[i][j] = max({dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j]}) + a[i][j];
    cout << dp[n][m];
    return 0;
}

//* Cách 2
/* #include<bits/stdc++.h>
using namespace std;

long long dp[1000][1000];
int a[1000][1000];
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0;i <= n;i++){
        for(int j = 0;j <= m;j++){
            if(i == 0 || j == 0)dp[i][j] = 0;
            else dp[i][j] = max({dp[i-1][j-1],dp[i][j-1],dp[i-1][j]}) + a[i][j];
        }
    }
    cout << dp[n][m];
}
 */
