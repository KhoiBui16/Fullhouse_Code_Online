/*
    C++ Buổi 24_Bài 07(OOP).Tìm kiếm sinh viên theo ngành.\
    Bạn hãy viết 1 chương trình để tìm kiếm sinh viên theo ngành và mỗi sinh viên có các thông tin như sau:

    • Mã sinh viên: dãy ký tự không có khoảng trống (không quá 15). Đảm bảo không trùng nhau.

    • Họ và tên: độ dài không quá 100.

    • Lớp: dãy ký tự không có khoảng trống (không quá 15).

    • Email: dãy ký tự không có khoảng trống (không quá 15).

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
#include <map>
#include <sstream>
#include <vector>
using namespace std;

class Student
{
private:
    string StudentID;
    string FullName;
    string ClassName;
    string Email;
    string Major;

public:
    Student() {}

    Student(string &id, string &name, string &cls, string &email) : StudentID(id), FullName(name), ClassName(cls), Email(email)
    {
        FullName = StandardizeName(FullName);
        Major = GetMajor(ClassName);
    }

    void DisplayInfo() const
    {
        cout << StudentID << " " << FullName << " " << ClassName << " " << Email << endl;
    }

    string GetMajor() const { return Major; }

private:
    void UppercaseFirstLetter(string &str)
    {
        str[0] = toupper(str[0]);
        for (int i = 1; i < str.size(); i++)
            str[i] = tolower(str[i]);
    }

    string StandardizeName(string &str)
    {
        string Name = str;
        string formattedName = "";
        stringstream ss(Name);
        string word;
        while (ss >> word)
        {
            UppercaseFirstLetter(word);
            formattedName += word;
            formattedName += " ";
        }
        formattedName.erase(formattedName.size() - 1, 1);
        return formattedName;
    }

    string GetMajor(string cls)
    {
        string major = "";
        for (int i = 0; i < cls.size(); i++)
        {
            if (cls[i] < '0' || cls[i] > '9')
                major += cls[i];
        }
        return major;
    }
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<Student> students;
    for (int i = 0; i < n; i++)
    {
        string id, name, cls, email;
        getline(cin, id);
        getline(cin, name);
        getline(cin, cls);
        getline(cin, email);

        Student sv(id, name, cls, email);
        students.push_back(sv);
    }

    int queries;
    cin >> queries;
    cin.ignore();

    map<string, string> majorMap;
    majorMap["CNTT"] = "CONG NGHE THONG TIN :";
    majorMap["DTVT"] = "DIEN TU VIEN THONG :";
    majorMap["KT"] = "KE TOAN :";
    majorMap["MKT"] = "MARKETING :";

    while (queries--)
    {
        string Major;
        getline(cin, Major);
        cout << "DANH SACH SINH VIEN NGANH " << majorMap[Major] << endl;

        for (const Student &x : students)
        {
            if (x.GetMajor() == Major)
                x.DisplayInfo();
        }
    }

    return 0;
}
