/*
    C++ Buổi 19-20_Bài 06.Danh sách mặt hàng.
    Bài toán quản lý danh sách mặt hàng trong đó mỗi mặt hàng sẽ có các thông tin:

    • Mã mặt hàng: tự động tăng, tính từ MH0001.

    • Tên mặt hàng: xâu ký tự độ dài không quá 100.

    • Đơn vị tính: xâu ký tự độ dài không quá 10.

    • Giá mua: số nguyên dương không quá 7 chữ số.

    • Giá bán: số nguyên dương không quá 7 chữ số.

    Viết chương trình nhập danh sách mặt hàng, sắp xếp theo lợi nhuận (giá bán trừ đi giá mua) giảm dần. Nếu lợi nhuận bằng nhau thì in ra theo thứ tự mã tăng dần.

    Input Format
    Dòng đầu ghi số T là số mặt hàng (không quá 1000). Tiếp theo là thông tin của T mặt hàng, mỗi mặt hàng ghi trên 4 dòng theo đúng thứ tự đã mô tả (không có mã).

    Output Format
    In ra danh sách mặt hàng có đầy đủ thông tin ở trên và lợi nhuận tính được.

    Ví dụ:
    Dữ liệu vào:
    5
    Mi Tom
    Thung
    250000
    367000
    Ao Thun
    Cai
    145000
    263000
    Ca Phe
    Thung
    359000
    597000
    Nuoc Ngot
    Thung
    326000
    515000
    Dep
    Thung
    484000
    647000

    Dữ liệu ra:
    MH0003 Ca Phe Thung 359000 597000 238000
    MH0004 Nuoc Ngot Thung 326000 515000 189000
    MH0005 Dep Thung 484000 647000 163000
    MH0002 Ao Thun Cai 145000 263000 118000
    MH0001 Mi Tom Thung 250000 367000 117000
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct MatHang
{
	string MaMH;
	string TenMH;
	string DonViTinh;
	int GiaMua;
	int GiaBan;
};
typedef struct MatHang MATHANG;

MATHANG Nhap1MatHang(int);
void In1MatHang(MATHANG);
bool cmp(MATHANG&, MATHANG&);

int main()
{
	vector<MATHANG> ds;
	// Nhập số lượng mặt hàng
	int t;
	cin >> t;

	// Nhập danh sách mặt hàng
	for (int i = 1; i <= t; i++)
	{
		cin.ignore();
		MATHANG mh = Nhap1MatHang(i);
		ds.push_back(mh);
	}

	sort(ds.begin(), ds.end(), cmp);
	for (int i = 0; i < t; i++)
		In1MatHang(ds[i]);


	return 0;
}

MATHANG Nhap1MatHang(int stt)
{
	MATHANG x;
	string MaSo = "MH";
	if (stt <= 9)
		MaSo += "000" + to_string(stt);
	else if (stt >= 10 && stt <= 99)
		MaSo += "00" + to_string(stt);
	else if (stt >= 100 && stt <= 999)
		MaSo += "0" + to_string(stt);
	else
		MaSo += to_string(stt);

	x.MaMH = MaSo;
	getline(cin, x.TenMH);
	cin >> x.DonViTinh;
	cin >> x.GiaMua;
	cin >> x.GiaBan;	
	return x;
}

void In1MatHang(MATHANG x)
{
	int profit = x.GiaBan - x.GiaMua;
	cout << x.MaMH << " " << x.TenMH << " " << x.DonViTinh << " " << x.GiaMua << " " << x.GiaBan << " " << profit << endl;
}

bool cmp(MATHANG& a, MATHANG& b)
{
	int profitA = a.GiaBan - a.GiaMua;
	int profitB = b.GiaBan - b.GiaMua;
	if (profitA > profitB)
		return true;
	else
		return false;
	if (profitA == profitB)
	{
		if (a.MaMH < b.MaMH)
			return true;
		else return false;
	}
}