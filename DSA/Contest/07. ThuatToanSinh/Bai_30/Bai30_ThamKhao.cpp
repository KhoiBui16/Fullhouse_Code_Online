#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> hoanVi;
vector<int> hoanViTam;
vector<bool> daChon;

void sinhHoanVi(int N) {
    if (hoanViTam.size() == N) {
        hoanVi.push_back(hoanViTam);
    } else {
        for (int i = 1; i <= N; ++i) {
            if (!daChon[i] && (hoanViTam.empty() || abs(hoanViTam.back() - i) > 1)) {
                hoanViTam.push_back(i);
                daChon[i] = true;
                sinhHoanVi(N);
                daChon[i] = false;
                hoanViTam.pop_back();
            }
        }
    }
}

int main() {
    int soBoTest;
    cin >> soBoTest;
    while (soBoTest--) {
        int N;
        cin >> N;
        hoanVi.clear();
        hoanViTam.clear();
        daChon.assign(N + 1, false);
        sinhHoanVi(N);
        for (const auto& p : hoanVi) {
            for (int so : p) {
                cout << so;
            }
            cout << endl;
        }
    }
    return 0;
}
