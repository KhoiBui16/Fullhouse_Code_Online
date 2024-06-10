#include <bits/stdc++.h>
using namespace std;

int t, n, s, p, a[1001];
vector <int> v;
vector<vector<int>> ans;

bool isPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

void Try(int i, int pos, int sum)
{
    // thoa yeu bai toan
    if (i == n && sum == s) {
        vector <int> res(a + 0, a + n); //* copy vi tri qua tu 0 -> n - 1
        ans.push_back(res);
    }
    for (int j = pos; j < v.size(); j++) {
        if (sum + v[j] <= s) {
            a[i] = v[j];
            Try(i + 1, j + 1, sum + v[j]);
        }
    }
}

void solve() // cần coi video làm lại
{
    cin >> n >> p >> s;
    // tinh tu p + 1
    for (int i = p + 1; i <= s; i++) {
        // ai la so nguyen to thi luu vao vector
        if (isPrime(i)) v.push_back(i);
    }
    Try(0, 0, 0);
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    ans.clear();
    v.clear();
}

int main()
{
    cin >> t;
    while(t--) solve();
    return 0;
}