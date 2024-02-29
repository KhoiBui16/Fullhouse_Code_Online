/*
    C++ Buổi 26_Bài 02(Kế Thừa).Quản lý nhân viên.
    Công ty FH muốn lập bảng kê tiền lương cho nhân viên.Trước tiên bạn hãy tạo 1 lớp Nguoi có các dữ liệu là Họ và tên, ngày sinh, và giới tính.Sau đó bạn cho lớp NhanVien kế thừa từ lớp Nguoi ấy và lớp NhanVien gồm các thông tin như sau:

    o Lương ngày

    o Số ngày công

    o Chức vụ

    Quy tắc tính lương của công ty FH như sau:

    • Lương tháng = Lương ngày * số ngày công

    • Thưởng

    o Nếu số ngày công >=25: Thưởng 20%* Lương Tháng

    o Nếu số ngày công >=22: Thưởng 10%* Lương Tháng

    o Nếu số ngày công < 22 : Không Thưởng

    • Phụ cấp chức vụ:

    o Nếu chức vụ là GD: 250000

    o PGĐ: 200000

    o TP:180000

    o NV: 150000

    Hãy nhập thông tin các nhân viên, tính toán thu nhập theo quy tắc trên và sắp xếp theo thu nhập giảm dần và nếu có 2 nhân viên có cùng mức lương thì ông có mã nhân viên cao hơn xếp trước.

    Input Format
    Dòng đầu ghi số nhân viên (không quá 50 nhân viên)

    • Mỗi nhân viên ghi trên 4 dòng

    o Họ tên(Có thể chưa về chuẩn dạng)

    o Ngày sinh(Có thể chưa về chuẩn dạng dd/mm/yyyy)

    o Giới Tính(Nam,Nữ hoặc Khác)

    o Lương ngày

    o Số ngày công

    o Chức vụ

    Output Format
    Ghi ra danh sách nhân viên đã được tính lương gồm các thông tin:

    • Mã nhân viên (tự động tăng theo thứ tự nhập, tính từ NV01)

    • Tên nhân viên(Chuẩn)

    • Ngày sinh(Chuẩn dạng dd/mm/yyyy)

    • Giới Tính(Nam,Nữ hoặc Khác)

    • Lương tháng

    • Thưởng

    • Phụ cấp chức vụ

    • Thực lĩnh.

    Dòng cuối ghi tổng chi phí tiền lương (theo mẫu trong ví dụ).

    Ví dụ:
    Dữ liệu vào:
    3
    Cao Van Vu
    12/12/2002
    Nam
    50000
    26
    GD
    Bui Thi Trang
    1/1/1999
    Nu
    45000
    23
    PGD
    Do Van Truong
    5/10/2000
    Nam
    40000
    25
    PGD

    Dữ liệu ra:
    NV01 Cao Van Vu 12/12/2002 Nam 1300000 260000 250000 1810000
    NV03 Do Van Truong 05/10/2000 Nam 1000000 200000 200000 1400000
    NV02 Bui Thi Trang 01/01/1999 Nu 1035000 103500 200000 1338500
    Tong chi phi tien luong: 4548500
*/

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long
using namespace std;

class Nguoi
{
    private:
        string HoTen;
        string NgaySinh;
        string GioiTinh;

    public:
        Nguoi(string hoTen, string ngaySinh, string gioiTinh)
        {
            this->HoTen = hoTen;
            this->NgaySinh = ngaySinh;
            this->GioiTinh = gioiTinh;
        }

        void InThongTin()
        {
            cout << this->HoTen << " " << this->NgaySinh << " " << this->GioiTinh << " ";
        }
};

class NhanVien : public Nguoi
{
    private:
        ll LuongNgay;
        int SoNgayCong;
        string ChucVu;
        string ID;
        ll LuongThang;
        ll Thuong;
        ll PhuCap;
        ll ThucLinh;

    public:
        NhanVien(int stt, string hoTen, string ngaySinh, string gioiTinh, ll luongNgay, int soNgayCong, string chucVu) : Nguoi(hoTen, ngaySinh, gioiTinh)
        {
            string id = "NV";
            if (stt < 10)
                id += "0" + to_string(stt);
            else
                id += to_string(stt);

            this->ID = id;
            this->LuongNgay = luongNgay;
            this->SoNgayCong = soNgayCong;
            this->ChucVu = chucVu;
            this->LuongThang = luongThang();
            this->Thuong = luongThuong();
            this->PhuCap = luongPhuCap();
            this->ThucLinh = (this->LuongThang + this->Thuong + this->PhuCap);
        }

        ll getLuongNgay() { return this->LuongNgay; }
        int getSoNgayCong() { return this->SoNgayCong; }
        string getChucVu() { return this->ChucVu; }

        ll luongThang() 
        { 
            return (getLuongNgay() * getSoNgayCong()); 
        }

        ll luongThuong()
        {
            ll thuong = 0;
            ll luongthang = luongThang();
            int soNgayCong = getSoNgayCong();
            
            if (soNgayCong >= 25)
                thuong = (luongthang * 0.2);
            else if (soNgayCong < 25 && soNgayCong >= 22)
                thuong = (luongthang * 0.1);
            
            return thuong;
        }

        ll luongPhuCap()
        {
            string chucVu = getChucVu();
            ll phuCap = 0;

            if (chucVu == "GD")
                phuCap = 250000;
            else if (chucVu == "PGD")
                phuCap = 200000;
            else if (chucVu == "TP")
                phuCap = 180000;
            else 
                phuCap = 150000;
            
            return phuCap;
        }

        ll getThuNhap() { return this->ThucLinh; }
        string getMaNV() { return this->ID; }

        void InThongTin()
        {
            cout << this->ID << " ";
            Nguoi::InThongTin();
            cout << this->LuongThang << " " << this->Thuong << " " << this->PhuCap << " " << this->ThucLinh << endl;
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
    for (int i = 0; i < name.size(); i++)
        name[i] = tolower(name[i]);
    name[0] = toupper(name[0]);
}

string convertName(string fullname)
{
    string newName = "";
    stringstream ss(fullname);
    string word;

    while (ss >> word)
    {
        VietHoa(word);
        newName += word + " ";
    }

    newName.erase(newName.size() - 1, 1);
    return newName;
}

bool compare(NhanVien a, NhanVien b)
{
    if (a.getThuNhap() != b.getThuNhap())
        return a.getThuNhap() > b.getThuNhap();
    else
        return a.getMaNV() > b.getMaNV();
}

int main()
{
    int soLuong;
    cin >> soLuong;
    cin.ignore();
    vector<NhanVien> danhSach;

    for (int i = 1; i <= soLuong; i++)
    {
        string hoTen;
        getline(cin, hoTen);
        hoTen = convertName(hoTen);

        string ngaySinh;
        getline(cin, ngaySinh);
        convertBirth(ngaySinh);

        string gioiTinh;
        getline(cin, gioiTinh);

        ll luongNgay;
        cin >> luongNgay;

        int soNgayCong;
        cin >> soNgayCong;
        cin.ignore();
        
        string chucVu;
        getline(cin, chucVu);

        NhanVien x(i, hoTen, ngaySinh, gioiTinh, luongNgay, soNgayCong, chucVu);
        danhSach.push_back(x);
    }


    sort(danhSach.begin(), danhSach.end(), compare);

    ll chiPhiTienLuong = 0;

    for (NhanVien it : danhSach)
    {
        it.InThongTin();
        chiPhiTienLuong += it.getThuNhap();
    }
    
    cout << "Tong chi phi tien luong: " << chiPhiTienLuong;

    return 0;
}