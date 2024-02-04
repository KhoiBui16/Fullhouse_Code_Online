/*
    C++ Buổi 19-20_Bài 10.Quản lý quán Game.
    Một quán Game mới mở muốn nhờ bạn tạo 1 phần mềm để tính tiền của khách hàng dựa trên dữ liệu giờ vào và giờ ra để tinh thời gian chơi.Bạn hãy tạo giúp chủ quán nhé.

    Input Format
    Dữ liệu vào ghi số lượng khách hàng trong ngày (không quá 30). Thông tin về một game thủ đến chơi game được ghi lại trên 4 dòng lần lượt là:

    -username (xâu ký tự độ dài không quá 30).

    -password (xâu ký tự độ dài không quá 30, không có khoảng tróng).

    -Tên người chơi (xâu ký tự độ dài không quá 50, có thể có khoảng trống).

    -Giờ vào có dạng hh:mm và giờ ra có dạng hh:mm.

    Output Format
    In ra danh sách khách hàng đã được sắp xếp theo thời gian chơi game giảm dần, nếu có 2 khách hàng có cùng giờ chơi game thì khách hàng nào có username có thứ tự từ điển nhỏ hơn được in ra trước.

    Ví dụ:
    Dữ liệu vào:
    4
    longabc1
    long324
    Pham Van Long
    18:30
    20:18
    conan22
    79801
    Nguyen Thanh Chien
    08:18
    12:05
    Jonhaw7
    manh23
    Nguyen Van Manh
    14:20
    16:23
    pyteeq
    96ae2
    Nghiem Xuan Tu
    05:45
    07:05
    Dữ liệu ra:
    conan22 79801 Nguyen Thanh Chien 3 gio 47 phut 
    Jonhaw7 manh23 Nguyen Van Manh 2 gio 3 phut 
    longabc1 long324 Pham Van Long 1 gio 48 phut 
    pyteeq 96ae2 Nghiem Xuan Tu 1 gio 20 phut
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct KhachHang
{
    string username;
    string password;
    string name;
    string gio_vao;
    string gio_ra;
    int thoigian_choi;
};

KhachHang Nhap1KhachHang(int stt)
{
    KhachHang kh;
    getline(cin, kh.username);
    getline(cin, kh.password);
    getline(cin,kh.name);
    getline(cin, kh.gio_vao);
    getline(cin, kh.gio_ra);
    return kh;
}

int TinhThoiGianChoi(string gioVao, string gioRa)
{
    int tgGioVao = stoi(gioVao.substr(0, 2));
    int tgPhutVao = stoi(gioVao.substr(3, 2));
    int tgGioRa = stoi(gioRa.substr(0, 2));
    int tgPhutRa = stoi(gioRa.substr(3, 2));
    int TongThoiGianChoi = 0;

    if (tgPhutRa >= tgPhutVao)
    {
        TongThoiGianChoi = (tgGioRa - tgGioVao) * 60 + (tgPhutRa - tgPhutVao);
    }
    else
    {
        TongThoiGianChoi = (tgGioRa - tgGioVao - 1) * 60 + (60 - tgPhutVao + tgPhutRa);
    }
    
     // Chuyển thời gian chơi về phút
    return TongThoiGianChoi;
}

void In1KhachHang(KhachHang kh)
{
    // Chuyển thời gian chơi từ phút về giờ và phút
    int tgChoi = kh.thoigian_choi;
    int tgGioChoi = tgChoi / 60;
    int tgPhutChoi = tgChoi % 60;

    cout << kh.username << " " << kh.password << " " << kh.name << " " << tgGioChoi << " gio " << tgPhutChoi << " phut" << endl;
    
}

int main()
{
    int n;
    vector<KhachHang> ds;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        KhachHang kh;
        kh = Nhap1KhachHang(i);
        kh.thoigian_choi = TinhThoiGianChoi(kh.gio_vao, kh.gio_ra);
        ds.push_back(kh);
    }

    sort(ds.begin(), ds.end(), [](KhachHang& a, KhachHang& b)
    {
        if (a.thoigian_choi != b.thoigian_choi)
        {
            return a.thoigian_choi > b.thoigian_choi;
        }
        else
        {
            return a.username < b.username;
        }
        
    });

    for (KhachHang& it : ds)
    {
        In1KhachHang(it);
    }
    return 0;
}