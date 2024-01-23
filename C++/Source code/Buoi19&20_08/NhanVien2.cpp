/*
    C++ Buổi 19-20_Bài 08.Nhân viên 2.
    Một nhân viên làm việc trong công ty được lưu lại các thông tin sau:

    Mã nhân viên: được gán tự động tăng, bắt đầu từ 00001.
    Họ tên: Xâu ký tự không quá 40 chữ cái.
    Giới tính: Nam hoặc Nu.
    Ngày sinh: đúng theo chuẩn dd/mm/yyyy.
    Địa chỉ: Xâu ký tự không quá 100 chữ cái.
    Mã số thuế: Dãy số có đúng 10 chữ số.
    Ngày ký hợp đồng: đúng theo chuẩn dd/mm/yyyy.
    Viết chương trình nhập danh sách nhân viên (không nhập mã) sau đó sắp xếp theo thứ tự ngày sinh từ già nhất đến trẻ nhất và in ra màn hình danh sách đối tượng nhân viên đã sắp xếp. Nếu có 2 nhân viên có cùng ngày sinh thì nhân viên có mã sinh viên nhỏ hơn sẽ được xếp trước.

    Input Format
    Dòng đầu ghi số N là số nhân viên (không quá 40). Mỗi nhân viên ghi trên 6 dòng lần lượt ghi các thông tin theo thứ tự đã ghi trong đề bài. Không có mã nhân viên. Thông tin về ngày sinh và ngày kí hợp đồng được chuẩn hóa.

    Output Format
    Ghi ra danh sách đầy đủ nhân viên đã sắp xếp, mỗi nhân viên trên một dòng, các thông tin cách nhau đúng một khoảng trống.

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
    00003 Hoang Thi Hau Nu 04/02/1997 Than Hoa 7850562313 22/08/2020
    00002 Hoang Nam Ton Nam 07/10/2000 Dak Lak 7229064145 13/11/2019
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct NhanVien
{
    string MaNV;
    string HoTen;
    string GioiTinh;
    string NgaySinh;
    string DiaChi;
    ll MaSoThue;
    string NgayKiHD;
};
typedef struct NhanVien NHANVIEN;

void ChuanHoaNgay(string&);
NHANVIEN Nhap1Nv(int);
void In1Nv(NHANVIEN);

int main()
{
    vector<NHANVIEN> ds;
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        NHANVIEN nv = Nhap1Nv(i);
        ds.push_back(nv);
    }

    sort(ds.begin(), ds.end(), [](NHANVIEN& a, NHANVIEN& b)
    {
        string dobA = a.NgaySinh.substr(6) + a.NgaySinh.substr(3, 2) + a.NgaySinh.substr(0, 2);
        string dobB = b.NgaySinh.substr(6) + b.NgaySinh.substr(3, 2) + b.NgaySinh.substr(0, 2);

        if (dobA != dobB)
            return dobA < dobB; 
        else
            return a.MaNV < b.MaNV; 
    });
    for (NHANVIEN x : ds)
        In1Nv(x);

    return 0;
}

NHANVIEN Nhap1Nv(int stt)
{
    NHANVIEN nv;
    string MaSo = "";
    if (stt < 10)
        MaSo += ("0000" + to_string(stt));
    else
        MaSo += ("000" + to_string(stt));
    nv.MaNV = MaSo;
    getline(cin, nv.HoTen);
    getline(cin, nv.GioiTinh);
    getline(cin, nv.NgaySinh);
    getline(cin, nv.DiaChi);
    cin >> nv.MaSoThue;
    cin.ignore();
    getline(cin, nv.NgayKiHD);
    ChuanHoaNgay(nv.NgaySinh);
    return nv;
}

void In1Nv(NHANVIEN nv)
{
    ChuanHoaNgay(nv.NgayKiHD);
    cout << nv.MaNV << " " << nv.HoTen << " " << nv.GioiTinh << " " << nv.NgaySinh << " " << nv.DiaChi << " " << nv.MaSoThue << " " << nv.NgayKiHD << endl;
}

void ChuanHoaNgay(string& str)
{
    if (str[1] == '/')
        str.insert(0, "0");
    if (str[4] == '/')
        str.insert(3, "0");
}