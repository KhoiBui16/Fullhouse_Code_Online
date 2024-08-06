#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    // Map to store the count of each balance
    unordered_map<int, int> balance_count;
    balance_count[0] = 1; // Start with a balance of 0
    
    int balance = 0;
    int count = 0;
    
    // Traverse through the array
    for (int num : A) {
        if (num % 2 == 0) {
            // Even number
            balance++;
        } else {
            // Odd number
            balance--;
        }
        
        // Check how many times this balance has been seen before
        if (balance_count.find(balance) != balance_count.end()) {
            count += balance_count[balance];
        }
        
        // Update the map with the current balance
        balance_count[balance]++;
    }
    
    cout << count << endl;
    
    return 0;