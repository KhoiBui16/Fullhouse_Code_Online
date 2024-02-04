#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
long long fibo[93] = { 0 };
void generateFibo() {
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 93; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}
using namespace std;
int main() {
    long long n;
    int isOk = 0;
    cin >> n;
    generateFibo();
    for (int i = 0; i < 93; i++) {
        if (n == fibo[i]) {
            cout << "YES";
            isOk = 1;
            break;
        }
    }
    if (isOk == 0) cout << "NO";
}