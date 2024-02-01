/*
    C++ Buổi 19-20_Bài 05.Tính lương giáo viên
    Trường đại học P tính lương giáo viên theo quy tắc sau: Mỗi giáo viên có mã ngạch gồm 4 ký tự trong đó. 2 ký tự đầu là chức vụ (HT: Giáo viên kiêm nhiệm Hiệu trưởng, HP: Giáo viên kiêm nhiệm Hiệu phó, GV: Giáo viên). 2 ký tự số cuối cùng cho biết hệ số bậc lương (không quá 10). Lương cơ bản của mỗi giáo viên cũng có thể khác nhau. Phụ cấp quy định như sau. HT: 2.000.000. HP: 1.000.000. GV: 500.000. Thu nhập được tính bằng lương cơ bản nhân với hệ số bậc lương cộng thêm phụ cấp. Hãy tính lương cho 1 giáo viên theo quy tắc trên.

    Input Format
    Có 3 dòng lần lượt là mã ngạch, họ tên và lương cơ bản(không quá 7 chữ số).

    Output Format
    In ra mã ngạch,họ tên, bậc lương, thu nhập.

    Ví dụ:
    Dữ liệu vào:
    GV03
    Nghiem Xuan Tu
    1680000
    Dữ liệu ra:
    GV03 Nghiem Xuan Tu 3 5540000
*/

#include <iostream>
#include <string>
using namespace std;

struct GiaoVien
{
    string Ma;
    string HoTen;
    string ChucVu;
    int HeSoBac;
    long long LuongCoBan;
    long long PhuCap;
    long long Luong;
};
typedef struct GiaoVien GIAOVIEN;

void ThuNhap(GIAOVIEN);

int main()
{
    GIAOVIEN gv;
    getline(cin, gv.Ma);
    getline(cin, gv.HoTen);
    cin >> gv.LuongCoBan;

    ThuNhap(gv);
    return 0;
}

void ThuNhap(GIAOVIEN gv)
{
    // Chuc vu gv
    for (int i = 0; i < 2; i++)
        gv.ChucVu += gv.Ma[i];
    
    // He so bac gv
    if (gv.Ma[2] == '0')
        gv.HeSoBac = (gv.Ma[3] - '0');
    else
        gv.HeSoBac = 10;

    // Luong phu cap gv
    if (gv.ChucVu == "HT")
        gv.PhuCap = 2000000;
    else if (gv.ChucVu == "HP")
        gv.PhuCap = 1000000;
    else
        gv.PhuCap = 500000;
    
    // Thu Nhao gv
    gv.Luong = gv.LuongCoBan * gv.HeSoBac + gv.PhuCap;
    cout << gv.Ma << " " << gv.HoTen << " " << gv.HeSoBac << " " << gv.Luong;
}