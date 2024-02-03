#include <iostream>
#include <algorithm>

using namespace std;

const long long MOD = 1000000007;

int main() {
    int n;
    cin >> n;

    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    long long result = 0;
    for (int i = 0; i < n; i++) {
        result = (result + (a[i] * i) % MOD) % MOD;
    }

    cout << result << endl;

    return 0;
}