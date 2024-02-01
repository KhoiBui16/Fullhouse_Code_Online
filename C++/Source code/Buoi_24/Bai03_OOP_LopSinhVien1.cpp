/*
	C++ Buổi 24_Bài 03(OOP).Lớp Sinh Viên 1.
	Viết chương trình khai lớp Sinh Viên gồm các thông tin: Họ tên, Ngày sinh, Điểm môn 1, Điểm môn 2, Điểm môn 3 và Tổng điểm. Đọc thông tin 1 thí sinh từ bàn phím và in ra màn hình 3 thông tin: Họ tên, Ngày sinh, Tổng điểm.

	Input Format
	Gồm 5 dòng lần lượt, mỗi dòng ghi 1 thông tin: Họ tên, Ngày sinh, Điểm môn 1, Điểm môn 2, Điểm môn 3.

	Họ tên không quá 50 chữ cái(Chưa đúng chuẩn), Ngày sinh viết chưa đúng chuẩn dd/mm/yyyy. Các giá trị điểm là số thực (Double).

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
#include <sstream>
#include <iomanip>
using namespace std;

class SinhVien
{
	private:
		string name, ngaySinh;
		double diemMon_1, diemMon_2, diemMon_3, tongDiem;
	public:
		SinhVien(string name, string ngaySinh, double mon_1, double mon_2, double mon_3)
		{
			this->name = name;
			this->ngaySinh = ngaySinh;
			this->diemMon_1 = mon_1;
			this->diemMon_2 = mon_2;
			this->diemMon_3 = mon_3;
			this->tongDiem = diemMon_1 + diemMon_2 + diemMon_3;
		}
		void setVietHoa(string&);
		void setChuanHoa(string&);
		void setngaySinh(string&);
		void to_string();
};

void SinhVien::setVietHoa(string& name)
{
	name[0] = toupper(name[0]);
	for (int i = 1; i < name.length(); i++)
		name[i] = tolower(name[i]);
}

void SinhVien::setChuanHoa(string& str)
{
	string nameSv = "";
	stringstream ss (str);
	string word;
	while(ss >> word)
	{
		setVietHoa(word);
		nameSv += word;
		nameSv += " ";
	}
		nameSv.erase(nameSv.size() - 1, 1);
		this->name = nameSv;
}

void SinhVien::setngaySinh(string& newNgaySinh)
{
	if (newNgaySinh[1] == '/')
		newNgaySinh.insert(0, "0");
	if (newNgaySinh[4] = '/')
		newNgaySinh.insert(3, "0");
	this->ngaySinh = newNgaySinh;
}

void SinhVien::to_string()
{
	cout << this->name << " " << this->ngaySinh << " " << fixed << setprecision(1) << this->tongDiem;
}

int main()
{
	string tenSv;
	string ngaySinh;
	double diemMon_1, diemMon_2, diemMon_3;
	getline(cin, tenSv);
	getline(cin, ngaySinh);
	cin >> diemMon_1 >> diemMon_2 >> diemMon_3;
	SinhVien a(tenSv, ngaySinh, diemMon_1, diemMon_2, diemMon_3);
	a.setngaySinh(ngaySinh);
	a.setChuanHoa(tenSv);
	a.to_string();

	return 0;
}

