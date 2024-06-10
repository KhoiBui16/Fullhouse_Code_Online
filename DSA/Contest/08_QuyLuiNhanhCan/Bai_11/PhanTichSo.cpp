#include <bits/stdc++.h>
#define MAX 101
using namespace std;

int n, s, a[MAX], x[MAX];
bool check;

void Try(int i, int sum, int pos) {
    if (sum == s) {
        check = true;
        cout << "[";
        for (int j = 1; j < i; j++) {
            cout << x[j];
            if (j != i - 1) cout << " ";
        }
        cout << "]";
        return;
    }
    for (int j = pos; j <= n; j++) {
        if (sum + a[j] <= s) {
            x[i] = a[j];
            Try(i + 1, sum + a[j], j);  
        } 
    }
}

void solve() {
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    check = false;
    Try(1, 0, 1);
    if (!check) cout << -1;
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}