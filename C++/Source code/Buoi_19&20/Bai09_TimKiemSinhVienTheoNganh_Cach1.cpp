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

#include <iostream>
#include <sstream>
#include <map>
using namespace std;


struct SV{
    string code, name, clas, email; 
};

string title(string s) {
    for (char &x: s) x = tolower(x);
    stringstream ss (s);
    string token, newS;
    while (ss >> token) {
        newS += toupper(token[0]);
        newS += token.substr(1) + " ";
    }
    return newS;
}

int main(){   
    int n; cin >> n;
    SV ds[n];
    for (auto &x : ds) {
        getline(cin >> ws, x.code);
        getline(cin >> ws, x.name);
        getline(cin >> ws, x.clas);
        getline(cin >> ws, x.email);

        x.name = title(x.name);
    }

    int query;
    cin >> query;

    map <string, string> mp;

    mp["CNTT"] = "CONG NGHE THONG TIN :\n";
    mp["DTVT"] = "DIEN TU VIEN THONG :\n";
    mp["KT"] = "KE TOAN :\n";
    mp["MKT"] = "MARKETING :\n";

    for (int i = 0; i < query; i++) {
        cout << "DANH SACH SINH VIEN NGANH ";
        string branch; cin >> branch;
        cout << mp[branch];
        for (auto x: ds) {
            if (x.clas.substr(0,branch.length()) == branch.substr(0,branch.length())) {
                cout << x.code << " " << x.name << x.clas << " " << x.email << endl;
            }
        }
    }

}
