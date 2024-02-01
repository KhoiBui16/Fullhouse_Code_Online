/*
    C++ Buổi 19_Bài 03.Cấu trúc sinh viên 2.
    Viết chương trình khai báo lớp Sinh Viên gồm các thông tin: Mã SV, Họ tên, Mã Lớp, Ngày sinh và Điểm GPA (dạng số thực). Đọc thông tin 1 sinh viên từ bàn phím (không có mã sinh viên) và in ra màn hình. Trong đó Mã SV được gán là SV001. Họ tên phải được đưa về dạng chuẩn(Ví dụ:Nguyen Van A)và Ngày sinh được chuẩn hóa về dạng dd/mm/yyyy.

    Input Format
    Gồm 4 dòng :

    Họ tên không quá 50 chữ cái(có thể chưa đúng dạng chuẩn).
    Lớp là một chuỗi không có dấu cách.
    Ngày sinh có đủ 3 phần ngày tháng năm nhưng có thể chưa đúng chuẩn dd/mm/yyyy.
    Điểm GPA đảm bảo trong thang điểm 4.
    Ouput Format
    In ra thông tin SV gồm : Mã SV, Họ và tên, Mã Lớp, Ngày sinh, Điểm GPA(với độ chính xác 1 chữ số sau dấu chấm)

    Ví dụ:
    Dữ liệu vào:
    Nghiem Xuan Tu
    DT1
    11/8/2002
    2.8
    Dữ liệu ra:
    SV001 Nghiem Xuan Tu DT1 11/08/2002 2.8
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

struct SinhVien
{
	string MaSV;
	string MaLop;
	string Hoten;
	string NgaySinh;
	float DiemGPA;
};
typedef struct SinhVien SINHVIEN;


void VietHoa(string&);
void ChuanHoaHoTen(string&);
void ConvertBirth(string&);

int main()
{
	SINHVIEN sv;
	sv.MaSV = "SV001";
	getline(cin, sv.Hoten);
	cin >> sv.MaLop >> sv.NgaySinh >> sv.DiemGPA;
	
	ChuanHoaHoTen(sv.Hoten);
	ConvertBirth(sv.NgaySinh);
	cout << sv.MaSV << " " << sv.Hoten << " " << sv.MaLop << " " << sv.NgaySinh << " " << fixed << setprecision(1) << sv.DiemGPA;
	return 0;
}

void VietHoa(string& Name)
{
	Name[0] = toupper(Name[0]);
	for (int i = 1; i < Name.size(); i++)
		Name[i] = tolower(Name[i]);
}

void ChuanHoaHoTen(string& s)
{
	string ten = s;
	s = "";
	stringstream ss(ten);
	string word;
	while (ss >> word)
	{
		VietHoa(word);
		s += word;
		s += " ";
	}
}

void ConvertBirth(string& NgaySinh)
{
	if (NgaySinh[1] == '/')
		NgaySinh.insert(0, "0");
	if (NgaySinh[4] == '/')
		NgaySinh.insert(3, "0");
}