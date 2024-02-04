/*
    C++ Buổi 19-20_Bài 09.Tìm kiếm sinh viên theo ngành.
    Bạn hãy viết 1 chương trình để tìm kiếm sinh viên theo ngành và mỗi sinh viên có các thông tin như sau:

    • Mã sinh viên: dãy ký tự không có khoảng trống (không quá 15). Đảm bảo không trùng nhau.

    • Họ và tên: độ dài không quá 100.(Có thể chưa chuẩn)

    • Lớp: dãy ký tự không có khoảng trống (không quá 15).

    • Email: dãy ký tự không có khoảng trống (không quá 50).

    Ngành học của sinh viên sẽ dựa trên 4 chữ cái đầu tiên của lớp bao gồm các ngành : DTVT(Điện tử viễn thông). CNTT(Công nghệ thông tin). KT(Kế toán). MKT(Marketing).

    Input Format
    Dòng đầu ghi số sinh viên (không quá 1000) Mỗi sinh viên ghi trên 4 dòng lần lượt là: mã, họ tên, lớp, email. Sau đó sẽ có giá trị số T là số truy vấn(không quá 1000). Mỗi truy vấn sẽ là 1 trong 4 ngành nêu trên.

    Output Format
    Đáp án của bài toán được in trên 1 dòng.

    Ví dụ:
    Dữ liệu vào:
    4
    1245331
    Pham Van Long
    CNTT1
    vlong@gmail.com
    6845201
    Nguyen Thanh Chien
    DTVT1
    Jonhaw7@gmail.com
    6336423
    Nghiem Xuan Tu
    CNTT2
    pyteeq@gmail.com
    4356317
    Tran Van Tu
    KT
    tutv12@gmail.com
    1
    CNTT
    Dữ liệu ra:
    DANH SACH SINH VIEN NGANH CONG NGHE THONG TIN :
    1245331 Pham Van Long CNTT1 vlong@gmail.com
    6336423 Nghiem Xuan Tu CNTT2 pyteeq@gmail.com
*/
    // Cách này chưa hoàm thiện hết các trường hợp => còn sai
#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string MaSv;
    string HoTen;
    string Lop;
    string Email;
    string NganhHoc;
};

// chuan hoa ten
void VietHoa(string& str)
{
    str[0] = toupper(str[0]);
    for (int i = 1 ; i < str.size(); i++)
        str[i] = tolower(str[i]);
}

string ChuanHoaTen(string& str)
{
    string Ten = str;
    string s = "";
    stringstream ss(Ten);
    string word;
    while(ss >> word)
    {
        VietHoa(word);
        s += word;
        s += " ";
    }
    s.erase(s.size() - 1, 1);
    return s;
}

SinhVien Nhap1Sv(int stt)
{
    SinhVien sv;
    getline(cin, sv.MaSv);
    getline(cin, sv.HoTen);
    getline(cin, sv.Lop);
    getline(cin, sv.Email);
    sv.HoTen = ChuanHoaTen(sv.HoTen);
    string Nganh = "";
    for (int i = 0; i < sv.Lop.size(); i++)
        if (sv.Lop[i] < '0' || sv.Lop[i] > '9')
            Nganh += sv.Lop[i];
    sv.NganhHoc = Nganh;
    return sv;
}

bool TimKiemSvTheoNganh(SinhVien sv, string NganhHoc)
{
    if (sv.NganhHoc == NganhHoc)
        return true;
    else
        return false;
}

void In1Sv(SinhVien sv)
{
    cout << sv.MaSv << " " << sv.HoTen << " " << sv.Lop << " " << sv.Email << endl;
}

int main()
{
    vector<SinhVien> ds;
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        SinhVien sv = Nhap1Sv(i);
        ds.push_back(sv);
        
    }
    int TruyVan;
    cin >> TruyVan;
    cin.ignore();
    while (TruyVan--)
    {
        string NganhHoc;
        getline(cin, NganhHoc);
        string TenNganh = "";
        if (NganhHoc == "CNTT")
            TenNganh = "CONG NGHE THONG TIN :";
        else if (NganhHoc == "DTVT")
            TenNganh = "DIEN TU VIEN THONG :";  
        else if (NganhHoc == "KT")
            TenNganh = "KE TOAN :";
        else 
            TenNganh = "MARKETING :";        
        cout << "DANH SACH SINH VIEN NGANH " << TenNganh << endl;
        for (SinhVien x : ds)
        {
            if (TimKiemSvTheoNganh(x, NganhHoc))
                In1Sv(x);
        }
    }
    
    return 0;
}