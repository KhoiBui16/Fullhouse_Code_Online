#include <iostream>
#include <string>
using namespace std;

void findLuckyNumber(int n) {
    for (int num7 = n / 7; num7 >= 0; --num7) {
        int remainder = n - num7 * 7;
        if (remainder % 4 == 0) {
            int num4 = remainder / 4;
            cout << string(num4, '4') + string(num7, '7') << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    int n;
    cin >> n;
    findLuckyNumber(n);
    return 0;
}
