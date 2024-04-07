#include <iostream>
#include <algorithm>
using namespace std;

long CountPairs(int arr[], int n, int k) {
    sort(arr, arr + n);
    long count = 0;
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum < k) {
            count += right - left;
            left++;
        } else {
            right--;
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
    
    long result = CountPairs(arr, n, k);
    cout << result;
    return 0;
}
