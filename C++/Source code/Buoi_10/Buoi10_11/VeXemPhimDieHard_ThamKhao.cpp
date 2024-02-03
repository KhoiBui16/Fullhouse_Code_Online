#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int bills[n];
    for (int i = 0; i < n; i++) {
        cin >> bills[i];
    }

    int twentyFiveCount = 0;
    int fiftyCount = 0;

    for (int i = 0; i < n; i++) {
        if (bills[i] == 25) {
            twentyFiveCount++;
        } else if (bills[i] == 50) {
            if (twentyFiveCount >= 1) {
                twentyFiveCount--;
                fiftyCount++;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        } else if (bills[i] == 100) {
            if (fiftyCount >= 1 && twentyFiveCount >= 1) {
                fiftyCount--;
                twentyFiveCount--;
            } else if (twentyFiveCount >= 3) {
                twentyFiveCount -= 3;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;

    return 0;
}