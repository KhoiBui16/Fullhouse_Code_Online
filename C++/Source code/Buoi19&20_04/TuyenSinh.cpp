/*
    C++ Buổi 19-20_Bài 04.Tuyển Sinh.
    Trường Đại học P tuyển sinh theo hình thức xét điểm thi ba môn Toán – Lý – Hóa. Để đơn giản, khu vực tuyển sinh được quy định luôn bởi ba chữ cái đầu tiên trong mã thí sinh. Do rất muốn hỗ trợ các thí sinh đến từ Khu vực 3 vì là vùng sâu vùng xa nên trường P tự quy định giá trị điểm ưu tiên Khu vực như sau:

    Giả sử biết trước điểm chuẩn là 26đ. Hãy xác định tình trạng tuyển sinh của thí sinh.

    KV1 : 0.5
    KV2 : 1.0
    KV3 : 2.0
    Input Format
    Chỉ bao gồm thông tin của một thí sinh trên 5 dòng lần lượt là: - Mã thí sinh - Họ tên - Điểm toán - Điểm lý - Điểm hóa

    Output Format
    In ra các thông tin: - Mã thí sinh - Họ tên - Khu vực - Tổng điểm – có tính khu vực ưu tiên (có thể có 1 số phần thập phân), trong trường hợp điểm là số thực với phần thập phân bằng 0 thì không in ra phần thập phân. - Trạng thái là: TRUNG TUYEN hoac TRUOT (sau khi đã tính cả điểm ưu tiên).

    Ví dụ:
    Dữ liệu vào:
    KV1B
    Nghiem Xuan Tu
    5.39
    7.2
    9
    Dữ liệu ra:
    KV1B Nghiem Xuan Tu 1 22.1 TRUOT
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct ThiSinh
{
    string Ma;
    string HoTen;
    int KhuVuc;
    float TongDiem;
    float Toan;
    float Ly;
    float Hoa;
};
typedef struct ThiSinh THISINH;

void TuyenSinh(THISINH&, float);

int main()
{
    THISINH hs;
    getline(cin, hs.Ma);
    getline(cin, hs.HoTen);
    cin >> hs.Toan;
    cin >> hs.Ly;
    cin >> hs.Hoa;
    float DiemChuan = 26.0;
    TuyenSinh(hs, DiemChuan);

    return 0;
}

void TuyenSinh(THISINH& hs, float DiemChuan)
{
    if (hs.Ma[2] == '1')
        hs.KhuVuc = 1;
    else if (hs.Ma[2] == '2')
        hs.KhuVuc = 2;
    else
        hs.KhuVuc = 3;
    hs.TongDiem = hs.Toan + hs.Ly + hs.Hoa;
    if (hs.KhuVuc == 1)
        hs.TongDiem += 0.5;
    else if (hs.KhuVuc == 2)
        hs.TongDiem += 1.0;
    else
        hs.TongDiem += 2.0;
    
    cout << hs.Ma << " " << hs.HoTen << " " << hs.KhuVuc << " ";
    if (hs.TongDiem / 10 == 0)
        cout << (int)hs.TongDiem << " ";
    else
        cout << fixed << setprecision(1) << hs.TongDiem << " ";
    if (hs.TongDiem > DiemChuan)
        cout << "TRUNG TUYEN";
    else
        cout << "TRUOT";
}