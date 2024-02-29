/*
    C++ Buổi 28_Bài 06.Thông tin sinh viên.
    
    Cho bạn 1 file text có tên "Data.txt" chứa thông tin của 1 sinh viên gồm 2 dòng dòng 1 là Tên(Có thể chưa chuẩn) và dòng 2 là Ngày sinh(Có thể chưa đúng dạng mm/dd/yyyy) của sinh viên ấy.Bạn hãy đọc thông tin trong File này ra và ghi vào File khác có tên "SinhVien.txt" dòng 1 lưu tên của Sinh viên(chuẩn) đó dòng thứ 2 lưu ngày sinh(đúng dạng mm/dd/yyyy)

    Ví dụ:
    Dữ liệu vào:
    Data.txt

    Pham xUan   CHI
    3/12/2003
    Dữ liệu ra:
    SinhVien.txt

    Pham Xuan Chi
    03/12/2003
*/

#include <bits/stdc++.h>
using namespace std;

void VietHoa(string& name)
{
    name[0] = toupper(name[0]);
    for (int i = 1; i < name.size(); i++)
        name[i] = tolower(name[i]);
}

string convertName(string& name)
{
    string newName = "";
    stringstream ss (name);
    string word;
    while (ss >> word)
    {
        VietHoa(word);
        newName += word + " ";
    }
    newName.erase(newName.size() - 1, 1);
    return newName;
}

void convertBirth(string& birth)
{
    if (birth[1] == '/')
        birth.insert(0, "0");
    if (birth[4] == '/')
        birth.insert(3, "0");
}

int main()
{
    ifstream in;
    in.open("Data.txt");

    ofstream out;
    out.open("SinhVien.txt");

    if (in.is_open())
    {
        string name;
        while(getline(in, name))
        {
            name = convertName(name);
            out << name << endl;
            string birth;
            getline(in, birth);
            convertBirth(birth);
            out << birth << endl;
        }
    }
    else
    {
        cout << "FIle bi loi trong qua trinh mo!\n";
    }

    in.close();
    out.close();
    return 0;
}