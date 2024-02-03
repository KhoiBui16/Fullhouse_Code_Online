#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for (int& i : a) {
		cin >> i;
	}
	sort(a.begin(), a.end());
	int count = 0;
	int l = 0, r = n - 1;
	while (l <= r) {
		if (a[l] + a[r] <= k) {
			count++;
			l++; r--;
		}
		else if (a[l] + a[r] > k) {
			r--;
			count++;
		}
	}
	cout << count;
}