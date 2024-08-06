#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> dp(N + 1, N + 1);
    dp[0] = 0; // Base case: 0 perfect squares needed to sum up to 0
    
    // Precompute all possible perfect squares less than or equal to N
    vector<int> squares;
    for (int i = 1; i * i <= N; ++i) {
        squares.push_back(i * i);
    }
    
    // Fill the dp table
    for (int i = 1; i <= N; ++i) {
        for (int sq : squares) {
            if (i >= sq) {
                dp[i] = min(dp[i], dp[i - sq] + 1);
            }
        }
    }
    
    // Output the result
    cout << dp[N] << endl;
    
    return 0;
}
