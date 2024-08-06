#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    
    // This will hold the smallest end element of increasing subsequences
    vector<int> lis;
    
    for (int num : A) {
        // Find the position where 'num' should be placed or replaced
        auto it = lower_bound(lis.begin(), lis.end(), num);
        
        // If 'num' is larger than any element in lis, it extends the length
        if (it == lis.end()) {
            lis.push_back(num);
        } else {
            // Otherwise, replace the element at the found position
            *it = num;
        }
    }
    
    // The size of 'lis' is the length of the longest increasing subsequence
    cout << lis.size() << endl;
    
    return 0;
}
