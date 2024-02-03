#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	int n; cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		auto it = upper_bound(a.begin(), a.end(), b[i]);
		if (it == a.end()) {
			cout << "_ ";
		}
		else {
			cout << *it << " ";
		}
	}
}