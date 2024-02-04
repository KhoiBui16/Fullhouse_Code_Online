#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    long long units = 0;  // Total units needed

    for (int i = 1; i < n; i++) {
        if (A[i] <= A[i - 1]) {
            units += A[i - 1] - A[i] + 1;
            A[i] = A[i - 1] + 1;
        }
    }

    cout << units << endl;

    return 0;
}