#include <iostream>
#include <string>

using namespace std;

long long convertToMin(string &s) {
    for (char &c : s) {
        if (c == '6') {
            c = '5';
        }
    }
    return stoll(s);
}

long long convertToMax(string &s) {
    for (char &c : s) {
        if (c == '5') {
            c = '6';
        }
    }
    return stoll(s);
}

void solve() {
    long long A, B;
    cin >> A >> B;

    string a_str = to_string(A);
    string b_str = to_string(B);

    long long minA = convertToMin(a_str);
    long long minB = convertToMin(b_str);
    long long minSum = minA + minB;

    long long maxA = convertToMax(a_str);
    long long maxB = convertToMax(b_str);
    long long maxSum = maxA + maxB;

    cout << minSum << " " << maxSum << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
