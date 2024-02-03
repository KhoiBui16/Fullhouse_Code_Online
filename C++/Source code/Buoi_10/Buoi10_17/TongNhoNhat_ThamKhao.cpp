#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	int n; cin >> n;
	vector<int> a(n);
	for (int& i : a) {
		cin >> i;
	}
	sort(a.begin(), a.end());
	//135 + 246 = 381
	long long num1 = 0;
	long long num2 = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			num1 = num1 * 10 + a[i];
		}
		else {
			num2 = num2 * 10 + a[i];
		}
	}
	cout << num1 + num2;
}