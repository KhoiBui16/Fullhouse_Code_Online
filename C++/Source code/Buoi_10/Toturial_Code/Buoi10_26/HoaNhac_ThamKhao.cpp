#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> tickets(n);
    for (int i = 0; i < n; i++) {
        cin >> tickets[i];
    }

    sort(tickets.begin(), tickets.end());

    for (int i = 0; i < m; i++) {
        int maxPrice;
        cin >> maxPrice;

        auto it = upper_bound(tickets.begin(), tickets.end(), maxPrice);
        if (it == tickets.begin()) {
            cout << -1 << endl;
        } else {
            it--;
            cout << *it << endl;
            tickets.erase(it); // Xóa vé đã mua
        }
    }

    return 0;
}