/*
    C++ Buổi 24_Bài 01(OOP).Lớp Phân Số.
    Viết chương trình khai báo lớp Phân Số gồm tử số và mẫu số. Các giá trị đều nguyên dương và không quá 18 chữ số. Sau đó thực hiện nhập vào một phân số và in ra phân số đó ở dạng tối giản. (Phải Code Bằng OOP Nhé!!!)

    Input Format
    2 số nguyên lần lượt là tử số và mẫu số.

    Output Format
    In ra phân số tối giản.

    Ví dụ:
    Dữ liệu vào:
    74 24
    Dữ liệu ra:
    37/12
*/

#include <iostream>
using namespace std;

class PhanSo
{
    private:
        long long Tu, Mau;
    public:
        // constructor
        PhanSo(long long Tu, long long Mau)
        {
            this->Tu = Tu;
            this->Mau = Mau;
        }
        // method
        long long GCD(long long, long long);
        void setRutGon(long long&, long long&);
        void to_string();
};

int main()
{
    long long TuSo, MauSo;
    cin >> TuSo >> MauSo;
    PhanSo ps(TuSo, MauSo);
    ps.setRutGon(TuSo, MauSo);
    ps.to_string();

    return 0;
}

long long PhanSo::GCD(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

void PhanSo::setRutGon(long long& Tu, long long& Mau)
{
    long long ucln = GCD(Tu, Mau);
    Tu = Tu / ucln;
    Mau = Mau / ucln;
    this->Tu = Tu;
    this->Mau = Mau;
}

void PhanSo::to_string()
{
    cout << this->Tu << "/" << this->Mau;
}
