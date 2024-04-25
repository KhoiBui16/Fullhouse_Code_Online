#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> ketQua;

void sinhTapCon(const vector<int> &arr)
{
    int N = arr.size();
    for (int i = 1; i < (1 << N); ++i)
    {
        vector<int> tapCon;
        for (int j = 0; j < N; ++j)
        {
            if (i & (1 << j))
            {
                tapCon.push_back(arr[j]);
            }
        }
        ketQua.push_back(tapCon);
    }
}

int main()
{
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    sinhTapCon(arr);

    sort(ketQua.begin(), ketQua.end(), [](const vector<int> &a, const vector<int> &b)
        { return a.size() < b.size() || (a.size() == b.size() && a < b); });

    for (const auto &subSet : ketQua)
    {
        for (int i = 0; i < subSet.size(); ++i)
        {
            cout << subSet[i];
            if (i < subSet.size() - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
