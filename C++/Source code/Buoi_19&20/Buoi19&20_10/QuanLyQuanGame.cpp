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
#include <map>
#include <algorithm>
using namespace std;

struct KhachHang
{
    string username;
    string password;
    string name;
    string gio_vao;
    string gio_ra;
    string thoigian_choi;
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

void In1KhachHang(KhachHang kh)
{
    cout << kh.username << " " << kh.password << " "
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
    }
    return 0;
}