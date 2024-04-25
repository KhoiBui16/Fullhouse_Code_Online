#include <iostream>
#include <vector>
using namespace std;

char kyTuCuoi;
int doDai;

vector<string> ketQua;

void sinhXauKyTu(char kyTuHienTai, int doDaiConLai, string xauHienTai)
{
    if (doDaiConLai == 0)
    {
        ketQua.push_back(xauHienTai);
        return;
    }

    for (char c = kyTuHienTai; c <= kyTuCuoi; ++c)
    {
        string xauMoi = xauHienTai + c;
        sinhXauKyTu(c, doDaiConLai - 1, xauMoi);
    }
}

void lietKeXau(char kyTuCuoi, int doDai)
{
    ketQua.clear();
    sinhXauKyTu('A', doDai, "");

    for (const string &s : ketQua)
    {
        cout << s << endl;
    }
}

int main()
{
    cin >> kyTuCuoi >> doDai;
    lietKeXau(kyTuCuoi, doDai);
    return 0;
}
