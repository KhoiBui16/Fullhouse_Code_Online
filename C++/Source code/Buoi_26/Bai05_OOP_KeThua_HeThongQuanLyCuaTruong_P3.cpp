/*
    C++ Buổi 26_Bài 05.(Kế Thừa).Hệ thống quản lý của trường P(3).

    Ngôi trường P muốn nhờ bạn viết 1 phần mềm giúp họ quản lý giáo viên và học sinh bạn hãy giúp nhà trường nhé!.

    Viết chương trình khai lớp Nguoi gồm các thông tin: Họ tên, Ngày sinh và Giới tính và khai báo lớp HocSinh gồm các thông tin: Mã sinh viên(tự động tăng dần), Điểm Gpa, Tên lớp.Sau đó cho lớp HocSinh kế thừa lớp Nguoi.Tiếp theo bạn hãy tạo 1 lớp GiaoVien gồm các thông tin sau : Mã giáo viên(tự động tăng dần), Môn giảng dạy và số lớp mà giáo viên đó giảng dạy và cũng cho lớp GiaoVien kế thừa lớp Nguoi

    Đọc thông tin 1 học sinh từ bàn phím các thông tin: Họ tên, Ngày sinh, Giới tính, Điểm Gpa, Tên lớp.

    Đọc thông tin 1 giáo viên từ bàn phím các thông tin: Họ tên, Ngày sinh, Giới tính, Môn giảng dạy và số lớp mà giáo viên đó giảng dạy.

    Input Format:
    Dòng đầu tiên nhập hai số N và M(N <= 100 và M <= 20).Trong đó N là số lượng Học Sinh, M là số lượng giáo viên của ngôi trường P.

    N dòng tiếp mỗi 1 dòng là thông tin của 1 Học sinh.

    M dòng tiếp mỗi 1 dòng là thông tin của 1 Giáo viên.

    Sau đó có T truy vấn (T <= 10).

    Mỗi truy vấn bạn sẽ nhập vào Họ và tên cần tìm kiếm(không phân biệt hoa thường) sau đó in ra tất cả Học Sinh sau đó là Giáo Viên giống tên cần tìm.
    Lưu ý: Họ tên không quá 50 chữ cái(có thể chưa chuẩn), Ngày sinh viết chưa đúng chuẩn dd/mm/yyyy. Các giá trị điểm là số thực (Double).

    Output Format
    Đầu tiên bạn hãy in ra toàn bộ danh sách Học Sinh : Mỗi 1 Học Sinh bạn hãy in đủ:Mã sinh viên, Họ tên, Ngày sinh, Giới tính, Điểm Gpa, Tên lớp.(Điểm lấy độ chính xác 2 chữ số sau dấu phẩy)

    Tiếp theo bãn hãy in ra toàn bộ danh sách các giáo : Mỗi 1 Giáo Viên bạn hãy in đủ:Mã giáo viên, Họ tên, Ngày sinh, Giới tính, Môn giảng dạy và số lớp mà giáo viên giảng dạy giảng dạy.

    Sau đó mỗi một T truy bạn vấn hãy in ra từng danh sách Học Sinh sau đó là Giáo Viên giống tên cần tìm ở truy vấn T đó. (Nhìn test mẫu để hiểu Format của output nhé!)

    Ví dụ:
    Dữ liệu vào:
    4 3
    Cao Van Vu
    12/12/2002
    Nam
    3.2
    CNTT2
    Bui Thi Trang
    1/1/1999
    Nu
    2.4
    MKT
    Do Van Truong
    5/10/2000
    Nam
    2.567
    CNTT1
    Pham Xuan Chi
    5/12/2001
    Nam
    3.24
    DTVT
    Pham Thi Thuy Linh
    1/10/1985
    Nu
    Giai Tich 1
    3
    Cao Van Vu
    5/10/1970
    Nam
    DSA
    3
    Tran Thu Huyen
    8/3/1985
    Nu
    Triet Hoc
    4
    MOI NHAP SO LUONG CAN TRY VAN:
    2
    CaO VaN vu
    Bui Thi Trang

    Dữ liệu ra:
    DANH SACH HOC SINH :
    SV001 Cao Van Vu 12/12/2002 Nam 3.20 CNTT2
    SV002 Bui Thi Trang 01/01/1999 Nu 2.40 MKT
    SV003 Do Van Truong 05/10/2000 Nam 2.57 CNTT1
    SV004 Pham Xuan Chi 05/12/2001 Nam 3.24 DTVT
    DANH SACH GIAO VIEN :
    GV001 Pham Thi Thuy Linh 01/10/1985 Nu Giai Tich 1 3
    GV002 Cao Van Vu 05/10/1970 Nam DSA 3
    GV003 Tran Thu Huyen 08/03/1985 Nu Triet Hoc 4
    DANH SACH BAN CAN TIM:
    SV001 Cao Van Vu 12/12/2002 Nam 3.20 CNTT2
    GV002 Cao Van Vu 05/10/1970 Nam DSA 3
    DANH SACH BAN CAN TIM:
    SV002 Bui Thi Trang 01/01/1999 Nu 2.40 MKT

*/

#include <bits/stdc++.h>
using namespace std;

class Nguoi
{
    private:
        string HoTen;
        string NgaySinh;
        string GioiTinh;

    public:
        Nguoi(string HoTen, string NgaySinh, string GioiTinh)
        {
            this->HoTen = HoTen;
            this->NgaySinh = NgaySinh;
            this->GioiTinh = GioiTinh;
        }

        string getTuoi() { return this->NgaySinh; }
        string getHoTen() {return this->HoTen; }
        void InThongTin()
        {
            cout << this->HoTen << " " << this->NgaySinh << " " << this->GioiTinh << " ";
        }
};

class HocSinh : public Nguoi
{
    private:
        string ID;
        double GPA;
        string Lop;

    public:
        HocSinh(string HoTen, string NgaySinh, string GioiTinh, int stt, double GPA, string Lop) : Nguoi(HoTen, NgaySinh, GioiTinh)
        {
            string id = "SV";
            if (stt < 10)
                id += "00" + to_string(stt);
            else if (stt >= 10 && stt < 100)
                id += "0" + to_string(stt);
            else
                id += to_string(stt);

            this->ID = id;
            this->GPA = GPA;
            this->Lop = Lop;
        }

        double getDiem() { return this->GPA; }
        string getMa() { return this->ID; }

        void InThongTin()
        {
            cout << this->ID << " ";
            Nguoi::InThongTin();
            cout << fixed << setprecision(2) << this->GPA << " " << this->Lop << endl;
        }
};

class GiaoVien : public Nguoi
{
    private:
        string ID;
        string MonGiangDay;
        int SoLopDay;

    public:
        GiaoVien(string HoTen, string NgaySinh, string GioiTinh, int stt, string MonGiangDay, int SoLopDay) : Nguoi(HoTen, NgaySinh, GioiTinh)
        {
            string id = "GV";
            if (stt < 10)
                id += "00" + to_string(stt);
            else if (stt >= 10 && stt < 100)
                id += "0" + to_string(stt);
            else
                id += to_string(stt);

            this->ID = id;
            this->MonGiangDay = MonGiangDay;
            this->SoLopDay = SoLopDay;
        }

        int getLop() { return this->SoLopDay; }
        string getNgaySinh()
        {
            return Nguoi::getTuoi();
        }
        
        void InThongTin()
        {
            cout << this->ID << " ";
            Nguoi::InThongTin();
            cout << this->MonGiangDay << " " <<  this->SoLopDay << endl;
        }
};

void VietHoa(string& Ten)
{
    for (int i = 1; i < Ten.size(); i++)
        Ten[i] = tolower(Ten[i]);
    Ten[0] = toupper(Ten[0]);
}

string ChuanHoaTen(string& HoTen)
{
    string TenMoi = "";
    stringstream ss(HoTen);
    string word;

    while(ss >> word)
    {
        VietHoa(word);
        TenMoi += word;
        TenMoi += " ";
    }

    TenMoi.erase(TenMoi.size() - 1, 1);
    return TenMoi;
}

void ChuanHoaNgaySinh(string& NgaySinh)
{
    if (NgaySinh[1] == '/')
        NgaySinh.insert(0, "0");
    if (NgaySinh[4] == '/')
        NgaySinh.insert(3, "0");
}


int main()
{
    int n, m;
    cin >> n >> m;
    cin.ignore();

    vector<HocSinh> hs;
    vector<GiaoVien> gv;

    for (int i = 1; i <= n; i++)
    {
        string HoTen;
        getline(cin, HoTen);
        HoTen = ChuanHoaTen(HoTen);

        string NgaySinh;
        getline(cin, NgaySinh);
        ChuanHoaNgaySinh(NgaySinh);

        string GioiTinh;
        getline(cin, GioiTinh);

        double GPA;
        cin >> GPA;
        cin.ignore();

        string Lop;
        getline(cin, Lop);

        HocSinh HS (HoTen, NgaySinh, GioiTinh, i, GPA, Lop);
        hs.push_back(HS);
    }

    for (int j = 1; j <= m; j++)
    {
        string HoTen;  
        getline(cin, HoTen);
        HoTen = ChuanHoaTen(HoTen);

        string NgaySinh;
        getline(cin, NgaySinh);
        ChuanHoaNgaySinh(NgaySinh);

        string GioiTinh;
        getline(cin, GioiTinh);

        string MonGiangDay;
        getline(cin, MonGiangDay);

        int SoLopDay;
        cin >> SoLopDay;
        cin.ignore();

        GiaoVien GV (HoTen, NgaySinh, GioiTinh, j, MonGiangDay, SoLopDay);
        gv.push_back(GV);
    }

    string CauLenh;
    getline(cin, CauLenh);

    int TruyVan;
    cin >> TruyVan;
    cin.ignore();

    vector<string> DSTruyVan;
    for (int  i = 0; i < TruyVan; i++)
    {
        string HoTen;
        getline(cin, HoTen);
        HoTen = ChuanHoaTen(HoTen);
        DSTruyVan.push_back(HoTen);
    }

    cout << "DANH SACH HOC SINH : " << endl;
    for (HocSinh it : hs)
    {
        it.InThongTin();
    }

    cout << "DANH SACH GIAO VIEN : " << endl;
    for (GiaoVien it : gv)
    {
        it.InThongTin();
    }

    for (int i = 0; i < DSTruyVan.size(); i++)
    {
        string TenCanTim = DSTruyVan[i];
        cout << "DANH SACH BAN CAN TIM: " << endl;

        for (HocSinh HS : hs)
            if (HS.getHoTen() == TenCanTim)
                HS.InThongTin();
        
        for (GiaoVien GV : gv)
            if (GV.getHoTen() == TenCanTim)
                GV.InThongTin();
    }

    return 0;
}
