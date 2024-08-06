#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    vector<int> sums;
    sums.push_back(0); // Start with the sum of the empty subset
    
    // Process each element in the array
    for (int num : A) {
        vector<int> new_sums;
        for (int sum : sums) {
            new_sums.push_back(sum + num);
        }
        // Append new sums to the list of all sums
        sums.insert(sums.end(), new_sums.begin(), new_sums.end());
    }
    
    // Sort the sums
    sort(sums.begin(), sums.end());
    
    // Output the sums
    for (int sum : sums) {
        cout << sum << " ";
    }
    
    cout << endl;
    
    return 0;
}
