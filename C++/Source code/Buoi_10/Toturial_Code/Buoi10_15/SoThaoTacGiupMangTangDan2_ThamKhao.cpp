#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	long long n, d; cin >> n >> d;
	vector<int> a(n);
	for (auto& i : a) cin >> i;
	long long count = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] <= a[i - 1]) {
			long long value = a[i - 1] - a[i];
			long long tmp = value / d + 1;
			count += tmp;
			a[i] = a[i] + tmp * d;
		}
	}
	cout << count;
}