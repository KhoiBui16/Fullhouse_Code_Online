/*
    C++ Buổi 19-20_Bài 07.Nhân viên.
    Một nhân viên làm việc trong công ty được lưu lại các thông tin sau: • Mã nhân viên: được gán tự động tăng, bắt đầu từ 00001 • Họ tên: Xâu ký tự không quá 40 chữ cái. • Giới tính: Nam hoặc Nu • Ngày sinh: đúng theo chuẩn dd/mm/yyyy • Địa chỉ: Xâu ký tự không quá 100 chữ cái • Mã số thuế: Dãy số có đúng 10 chữ số • Ngày ký hợp đồng: đúng theo chuẩn dd/mm/yyyy Viết chương trình nhập danh sách nhân viên (không nhập mã) trong đó có sử dụng chồng toán tử nhập/xuất và in ra màn hình danh sách vừa nhập.

    Input Format
    Dòng đầu ghi số N là số nhân viên (không quá 50). Mối nhân viên ghi trên 6 dòng lần lượt ghi các thông tin theo thứ tự đã ghi trong đề bài.(Không có mã nhân viên).

    Output Format
    Ghi ra danh sách đầy đủ nhân viên, mỗi nhân viên trên một dòng, các thông tin cách nhau đúng một khoảng trống. Thông tin nhân viên được chuẩn hóa ngày sinh và ngày kí hợp đồng.

    Ví dụ:
    Dữ liệu vào:
    3
    Pham Van Lam
    Nam
    22/9/1992
    Bien Hoa-Dong Nai
    6144097065
    5/8/2017
    Hoang Nam Ton
    Nam
    7/10/2000
    Dak Lak
    7229064145
    13/11/2019
    Hoang Thi Hau
    Nu
    04/02/1997
    Than Hoa
    7850562313
    22/8/2020
    Dữ liệu ra:
    00001 Pham Van Lam Nam 22/09/1992 Bien Hoa-Dong Nai 6144097065 05/08/2017
    00002 Hoang Nam Ton Nam 07/10/2000 Dak Lak 7229064145 13/11/2019
    00003 Hoang Thi Hau Nu 04/02/1997 Than Hoa 7850562313 22/08/2020

*/

#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <vector>
using namespace std;

struct NhanVien
{
	string MaNV;
	string HoTen;
	string GioiTinh;
	string NgaySinh;
	string DiaChi;
	string MaSoThue;
	string NgayKiHD;
};
typedef struct NhanVien NHANVIEN;

void ChuanHoaNgay(string&);
NHANVIEN Nhap1NV(int);
void In1NV(NHANVIEN);

int main()
{
	vector<NHANVIEN> ds;

	// nhập số lượng nhân viên
	int n;
	cin >> n;
	// Nhập danh sách sinh viên
	for (int i = 1; i <= n; i++)
	{
		cin.ignore();
		NHANVIEN nv = Nhap1NV(i);
		ds.push_back(nv);
	}

	// in danh sách nhân viên
	for (NHANVIEN x : ds)
		In1NV(x);

	return 0;
}

NHANVIEN Nhap1NV(int stt)
{
	NHANVIEN nv;
	string MaSo = "";
	if (stt < 10)
		MaSo += "0000" + to_string(stt);
	else
		MaSo += "000" + to_string(stt);
	nv.MaNV = MaSo;
	getline(cin, nv.HoTen);
	getline(cin, nv.GioiTinh);
	cin >> nv.NgaySinh;
	ChuanHoaNgay(nv.NgaySinh);
	cin.ignore();
	getline(cin, nv.DiaChi);
	cin >> nv.MaSoThue >> nv.NgayKiHD;
	ChuanHoaNgay(nv.NgayKiHD);
	return nv;
}

void In1NV(NHANVIEN x)
{
	cout << x.MaNV << " " << x.HoTen << " " << x.GioiTinh 
		<< " " << x.NgaySinh << " " << x.DiaChi << " " 
		<< x.MaSoThue << " " << x.NgayKiHD << endl;
}

void ChuanHoaNgay(string& Ngay)
{
	if (Ngay[1] == '/')
		Ngay.insert(0, "0");
	if (Ngay[4] == '/')
		Ngay.insert(3, "0");
}