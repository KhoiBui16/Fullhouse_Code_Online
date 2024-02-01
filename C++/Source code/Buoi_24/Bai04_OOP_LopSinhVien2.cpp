/*
    C++ Buổi 24_Bài 04(OOP).Lớp sinh viên 2.
    Viết chương trình khai báo lớp Sinh Viên gồm các thông tin: Mã SV, Họ tên, Lớp, Ngày sinh và Điểm GPA (dạng số thực). Đọc thông tin 1 sinh viên từ bàn phím (không có mã sinh viên) và in ra màn hình. Trong đó Mã SV được gán là SV001. Ngày sinh được chuẩn hóa về dạng dd/mm/yyyy.
    Input Format
    Gồm 4 dòng :

    Họ tên không quá 50 chữ cái.
    Lớp là một chuỗi không có dấu cách.
    Ngày sinh có đủ 3 phần ngày tháng năm nhưng có thể chưa đúng chuẩn dd/mm/yyyy.
    Điểm GPA đảm bảo trong thang điểm 4 với nhiều nhất 2 số sau dấu phẩy.
    Output Format
    In ra thông tin sinh viên trên 1 dòng, mỗi thông tin cách nhau 1 khoảng trống.

    Ví dụ:
    Dữ liệu vào:
    Copy
    Nghiem Xuan Tu
    DT1
    11/8/2002
    2.8
    Dữ liệu ra:
    Copy
    SV001 Nghiem Xuan Tu DT1 11/08/2002 2.8

*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class SinhVien
{
    private:
        string ID;
        string HoTen;
        string class_sv;
        string birth;
        float GPA;
    public:
        // constructor
        SinhVien(string ID, string HoTenSV, string LopSV, string NgaySinh, float GPA)
        {
            this->ID = ID;
            this->HoTen = HoTenSV;
            this->class_sv = LopSV;
            this->birth = NgaySinh;
            this->GPA = GPA;
        }

        // method
        void setConvertBirth(string&);
        void toupperFirstNameLetter(string&);
        void setConvertName(string&);
        void to_string();
};

int main()
{
    string HoTenSV, LopSV, NgaySinh;
    float gpa;
    getline(cin, HoTenSV);
    getline(cin, LopSV);
    getline(cin, NgaySinh);
    cin >> gpa;
    SinhVien sv("SV001", HoTenSV, LopSV, NgaySinh, gpa);
    sv.setConvertBirth(NgaySinh);
    sv.setConvertName(HoTenSV);
    sv.to_string();
    return 0;
}

void SinhVien::setConvertBirth(string& birth)
{
    if (birth[1] == '/')
        birth.insert(0, "0");
    if (birth[4] == '/')
        birth.insert(3, "0");
    this->birth = birth;
}

void SinhVien::toupperFirstNameLetter(string& firstName)
{
    firstName[0] = toupper(firstName[0]);
    for (int i = 1; i < firstName.size(); i++)   // firstName[i] != '\0'
    firstName[i] = tolower(firstName[i]);
}

void SinhVien::setConvertName(string& name)
{
    string newName = "";
    stringstream ss (name);
    string word;
    while(ss >> word)
    {
        toupperFirstNameLetter(word);
        newName += word + " ";
    }
    newName.erase(newName.size() - 1, 1);
    this->HoTen = newName;
}

void SinhVien::to_string()
{
    cout << this->ID << " " << this->HoTen << " " << this->class_sv << " " << this->birth << " " << this->GPA;
}