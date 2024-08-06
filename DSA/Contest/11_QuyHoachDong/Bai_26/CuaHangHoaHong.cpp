#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> smell(n);
    for (int i = 0; i < n; ++i) {
        cin >> smell[i];
    }
    
    // Arrays to store lengths of increasing subsequences
    vector<int> left(n, 1);
    vector<int> right(n, 1);
    
    // Compute the left array
    for (int i = 1; i < n; ++i) {
        if (smell[i] > smell[i - 1]) {
            left[i] = left[i - 1] + 1;
        }
    }
    
    // Compute the right array
    for (int i = n - 2; i >= 0; --i) {
        if (smell[i] < smell[i + 1]) {
            right[i] = right[i + 1] + 1;
        }
    }
    
    // Find the maximum length of increasing subsequence
    int max_length = max(left[n - 1], right[0]); // Case of not removing any element
    
    for (int i = 1; i < n - 1; ++i) {
        if (smell[i - 1] < smell[i + 1]) {
            max_length = max(max_length, left[i - 1] + right[i + 1]);
        }
    }
    
    cout << max_length << endl;
    
    return 0;
}