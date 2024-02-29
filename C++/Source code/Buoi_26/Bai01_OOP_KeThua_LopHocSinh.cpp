/*
    C++ Buổi 26_Bài 01(Kế Thừa).Lớp học sinh.
    Viết chương trình khai lớp Người gồm các thông tin: Họ tên, Ngày sinh và khai báo lớp Học Sinh gồm các thông tin: Mã sinh viên, Điểm môn 1, Điểm môn 2, Điểm môn 3, Tổng điểm sau đó cho lớp Học Sinh kế thừa lớp Người.Đọc thông tin 1 học sinh từ bàn phím và in ra màn hình 3 thông tin: Họ tên, Ngày sinh, Tổng điểm của 3 môn.

    Input Format
    Gồm 5 dòng lần lượt, mỗi dòng ghi 1 thông tin: Họ tên, Ngày sinh, Điểm môn 1, Điểm môn 2, Điểm môn 3.

    Họ tên không quá 50 chữ cái(có thể chưa chuẩn), Ngày sinh viết chưa đúng chuẩn dd/mm/yyyy. Các giá trị điểm là số thực (Double).

    Output Format
    In ra Họ tên, Ngày sinh và Tổng điểm. Mỗi thông tin cách nhau một khoảng trống. Điểm được ghi ra với 1 số sau dấu phẩy.

    Ví dụ:
    Dữ liệu vào:
    Pham Thanh Long
    11/8/2002 
    4.5 
    10.0 
    5.5

    Dữ liệu ra:
    Pham Thanh Long 11/08/2002 20.0
*/

#include <bits/stdc++.h>
#include <string.h>
using namespace std;

class Nguoi
{
    private:
        string HoTen;
        string NgaySinh;
    public:
        Nguoi(string hoTen, string ngaySinh)
        {
            this->HoTen = hoTen;
            this->NgaySinh = ngaySinh;
        }

        void InThongTin()
        {
            cout << this->HoTen << " " << this->NgaySinh;
        }
};

class HocSinh : public Nguoi
{
    private:
        string ID;
        double Mon1, Mon2, Mon3, TongDiem;
    public:
        HocSinh(string hoTen, string ngaySinh, double mon1, double mon2, double mon3) : Nguoi(hoTen, ngaySinh)
        {
            this->Mon1 = mon1;
            this->Mon2 = mon2;
            this->Mon3 = mon3;
            this->TongDiem = (this->Mon1 + this->Mon2 + this->Mon3);
        }

        void InThongTin()
        {
            Nguoi::InThongTin();
            cout << fixed << setprecision(1) << TongDiem << endl;
        }
};

void convertBirth(string& date)
{
    if (date[1] == '/')
        date.insert(0, "0");
    if (date[4] == '/')
        date.insert(3, "0");
}

void VietHoa(string& name)
{
    for (int i = 0; name[i] != '\0'; i++)
        name[i] = tolower(name[i]);
    name[0] = toupper(name[0]);
}

string convertName(string& fullname)
{
    string newName = "";
    stringstream ss(fullname);
    string word;

    while (ss >> word)
    {
        VietHoa(word);
        newName += word;
        newName += " ";
    }
    newName.erase(newName.size() - 1, 1);
    return newName;
}

int main()
{
    string ten;
    getline(cin, ten);
    ten = convertName(ten);

    string ngaysinh;
    getline(cin, ngaysinh);
    convertBirth(ngaysinh);

    double mon_1, mon_2, mon_3;
    cin >> mon_1 >> mon_2 >> mon_3;

    HocSinh a(ten, ngaysinh, mon_1, mon_2, mon_3);
    a.InThongTin();
    return 0;
}