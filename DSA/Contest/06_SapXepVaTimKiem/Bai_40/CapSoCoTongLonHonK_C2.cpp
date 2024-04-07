#include <iostream>
#include <algorithm>
using namespace std;

long countPairsWithSumGreaterThanK(int arr[], int n, int k) {
    sort(arr, arr + n);
    
    long count = 0;
    int left = 0;
    int right = n - 1;
    
    while (left < right) {
        if (arr[left] + arr[right] > k) {
            count += (right - left);
            right--;
        }
        else {
            left++;
        }
    }
    
    return count;
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long result = countPairsWithSumGreaterThanK(arr, n, k);
    cout << result;
    return 0;
}
