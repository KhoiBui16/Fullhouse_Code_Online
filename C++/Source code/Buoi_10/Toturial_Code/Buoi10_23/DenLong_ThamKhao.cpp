#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	int n, l; cin >> n >> l;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	double d = -1;
	if (a[0] != 0 && a[n - 1] != l) {
		d = max(a[0], l - a[n - 1]);
	}
	else if (a[0] != 0) {
		d = a[0];
	}
	else if (a[n - 1] != l) {
		d = l - a[n - 1];
	}
	for (int i = 1; i < n; i++) {
		d = max(d, (a[i] - a[i - 1]) / 2.0);
	}
	cout << fixed << setprecision(10) << d;
}