#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n; cin >> n;
    vector<int> nums(n);
    for (auto& i : nums) cin >> i;
    vector<long long> dp(n + 1);
    long long _max = dp[0];
    dp[0] = nums[0];
    for (int i = 1; i < n; i++) {
        dp[i] = nums[i];
        dp[i] = max(dp[i - 1] + nums[i], dp[i]);
        _max = max(dp[i], _max);
    }
    cout << _max;
    return 0;
}