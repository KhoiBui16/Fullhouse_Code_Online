/*
    C++ Buổi 19-20_Bài 02.Cấu trúc sinh viên 1.

    Viết chương trình khai báo cấu trúc Sinh Viên gồm các thông tin: Họ tên, Ngày sinh, Điểm môn 1, Điểm môn 2, Điểm môn 3 và Tổng điểm. Đọc thông tin 1 thí sinh từ bàn phím và in ra màn hình 3 thông tin: Họ tên, Ngày sinh, Tổng điểm.

    Input Format
    Gồm 5 dòng lần lượt, mỗi dòng ghi 1 thông tin: Họ tên, Ngày sinh, Điểm môn 1, Điểm môn 2, Điểm môn 3.

    Họ tên không quá 50 chữ cái, Ngày sinh viết chưa đúng chuẩn dd/mm/yyyy. Các giá trị điểm là số thực (Double).

    Output Format
    In ra Họ tên, Ngày sinh và Tổng điểm. Mỗi thông tin cách nhau một khoảng trống. Điểm được ghi ra với 1 số sau dấu phẩy.

    Ví dụ:
    Dữ liệu vào:
    Nghiem Xuan Tu 
    11/8/2002 
    4.5 
    10.0 
    5.5
    Dữ liệu ra:
    Nghiem Xuan Tu 11/08/2002 20.0
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

struct SinhVien
{
	string Hoten;
	string Ngaysinh;
	float Diem1;
	float Diem2;
	float Diem3;
	float TongDiem;
};
typedef struct SinhVien SINHVIEN;


void convertBirth(string& NgaySinh)
{
	if (NgaySinh[1] == '/')
		NgaySinh.insert(0, "0");
	if (NgaySinh[4] == '/')
		NgaySinh.insert(3, "0");
}


int main()
{
	SINHVIEN sv;
	getline(cin, sv.Hoten);
	getline(cin, sv.Ngaysinh);
	cin >> sv.Diem1 >> sv.Diem2 >> sv.Diem3;
	convertBirth(sv.Ngaysinh);
	sv.TongDiem = sv.Diem1 + sv.Diem2 + sv.Diem3;

	cout << sv.Hoten << " " << sv.Ngaysinh << " " << fixed << setprecision(1) << sv.TongDiem;

	return 0;
}