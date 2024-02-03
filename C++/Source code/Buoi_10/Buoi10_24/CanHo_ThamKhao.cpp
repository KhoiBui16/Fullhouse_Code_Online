#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	int n, m, k; cin >> n >> m >> k;
	vector<int> a(n);
	for (auto& i : a) {
		cin >> i;
	}
	vector<int>b(m);
	for (auto& i : b) {
		cin >> i;
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int i = 0, j = 0;
	int count = 0;
	while (i < n && j < m) {
		if (abs(b[j] - a[i]) <= k) {
			count++;
			i++; j++;
		}
		else if (a[i] > b[j]) {
			j++;
		}
		else i++;
	}
	cout << count;

}