/*
    C++ Buổi 28_Bài 05.Chuẩn hóa tên .
    Bạn được cung cấp một loạt các tên người nhưng không được chuẩn hóa từ file Name.txt, bạn được yêu cầu chuẩn hóa tên người sau đó lưu lại vào file Convert.txt. Tên người được chuẩn hóa theo cách viết hoa chữ cái của từng từ, viết thường những chữ cái còn lại. Khi lưu vào file bạn phải sắp xếp theo thứ tự từ điển tăng dần, chú ý phải xét tên trước rồi mới so tới họ và đệm

    Ví dụ:
    Dữ liệu vào:
    Name.txt

    nguyen Hoang NAM
    Pham THUY LiNH
    Do VAN AN
    
    Dữ liệu ra:
    Convert.txt

    Do Van An 
    Pham Thuy Linh
    Nguyen Hoang Nam

*/

#include <bits/stdc++.h>
using namespace std;


void VietHoa(string& name)
{
    name[0] = toupper(name[0]);
    for (int i = 1; i < name.size(); i++)
        name[i] = tolower(name[i]);
}

string convertName(string name)
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

int main()
{
    ifstream in;
    in.open("Name.txt");

    ofstream out;
    out.open("Convert.txt");

    if (in.is_open())
    {
        string name;
        vector<string> ds;
        while(getline(in, name))
        {
            name = convertName(name);
            ds.push_back(name);
        }
        sort(ds.begin(), ds.end());
        for (string it : ds)
            out << it << endl;
    }
    else
    {
        cout << "FIle bi loi trong qua trinh mo!\n";
    }

    in.close();
    out.close();
    return 0;
}