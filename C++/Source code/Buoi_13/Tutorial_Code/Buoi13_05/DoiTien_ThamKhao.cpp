#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1e9 + 7;

int main() {
    int n, s;
    cin >> n >> s;

    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    vector<int> dp(s + 1, INF);
    dp[0] = 0;

    for (int i = 1; i <= s; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= c[j]) {
                dp[i] = min(dp[i], dp[i - c[j]] + 1);
            }
        }
    }

    if (dp[s] == INF) {
        cout << -1 << endl;
    } else {
        cout << dp[s] << endl;
    }

    return 0;
}