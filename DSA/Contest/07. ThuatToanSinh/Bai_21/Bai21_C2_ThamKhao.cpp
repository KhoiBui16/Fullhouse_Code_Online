#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> tenSinhVien;

void sinhHoanVi()
{
    sort(tenSinhVien.begin(), tenSinhVien.end());
    do
    {
        for (const string &ten : tenSinhVien)
        {
            cout << ten << " ";
        }
        cout << endl;
    } while (next_permutation(tenSinhVien.begin(), tenSinhVien.end()));
}

int main()
{
    int soLuong;
    cin >> soLuong;

    tenSinhVien.resize(soLuong);
    for (int i = 0; i < soLuong; ++i)
    {
        cin >> tenSinhVien[i];
    }

    sinhHoanVi();

    return 0;
}
