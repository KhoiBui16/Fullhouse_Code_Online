#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += mp[k - a[i]];

        if (a[i] * 2 == k) {
            ans--;
        }
    }
    ans /= 2;
    cout << ans;
    return 0;
}
