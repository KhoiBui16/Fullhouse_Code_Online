#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
long long fibo[10000001] = { 0 };
long long mod = (long long)(1e9 + 7);
void generateFibo() {
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 10000001; i++) {
        fibo[i] = fibo[i - 1]%mod + fibo[i - 2]%mod;
        fibo[i] %= mod;
    }
}

int main() {
    generateFibo();
    int t; cin >> t;
    vector<int> v;
    while (t--) {
        int n; cin >> n;
        v.push_back(n);
    }
    for (int i = 0; i < v.size(); i++) {
        cout << fibo[v[i]] << endl;
    }
}