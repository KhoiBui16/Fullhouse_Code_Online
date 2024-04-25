#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> ketQua;

void sinhXauDoiXung(int n)
{
    for (int i = 0; i < (1 << (n / 2)); ++i)
    {
        string xau;
        for (int j = (n / 2) - 1; j >= 0; --j)
        {
            if (i & (1 << j))
            {
                xau += '1';
            }
            else
            {
                xau += '0';
            }
        }
        string xauDaoNguoc = xau;
        reverse(xauDaoNguoc.begin(), xauDaoNguoc.end());
        ketQua.push_back(xau + xauDaoNguoc);
    }
}

void inKetQua()
{
    sort(ketQua.begin(), ketQua.end());
    for (const string &s : ketQua)
    {
        cout << s << endl;
    }
}

int main()
{
    int soLuongTest;
    cin >> soLuongTest;

    while (soLuongTest--)
    {
        int n;
        cin >> n;
        ketQua.clear();
        sinhXauDoiXung(n);
        inKetQua();
    }

    return 0;
}
