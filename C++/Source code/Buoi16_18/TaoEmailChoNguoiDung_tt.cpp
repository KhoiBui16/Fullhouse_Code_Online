/*
    C++ Buổi 16_Bài 18.Tạo Email cho người dùng(tt).

    Cho một danh sách tên người dùng.Thực hiện tạo email từ tên người dùng (nhìn test mẫu để rõ format),nếu email được cấp của người dùng hiện tại đã được cấp cho một người dùng trước đó thì thêm số thứ tự vào tên Email,ví dụ bạn kiểm tra thấy Email manhnv@gmail.com đã được cấp cho một người dùng khác thì bạn phải đổi lại Email là manhnv2@gmail.com cho khách hàng hiện tại.

    Input Format
    1≤T≤1000 số lượng khách hàng trong danh sách. Mỗi dòng là một xâu kí tự là tên của mỗi khách hàng không quá 1000 kí tự.

    Output Format
    In ra Email của mỗi khách hàng.

    Ví dụ:
    Dữ liệu vào:
    5
    NguYEN VAN maNH
    Hoang  Thuy Linh
    NguyeN  Van ManH
    TrAn XUan   Tu
    NguYEN VAN maNH
    Dữ liệu ra:
    manhnv@gmail.com
    linhht@gmail.com
    manhnv2@gmail.com
    tutx@gmail.com
    manhnv3@gmail.com
*/

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <cctype>
#include <vector>
using namespace std;

void VietThuong(string&);

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	map<string, int> mp;
	for (int i = 1; i <= t; i++)
	{
		string name;
		getline(cin, name);
		VietThuong(name);
		vector<string> v;
		stringstream ss(name);
		string word;

		// Tách từ
		while (ss >> word)
			v.push_back(word);
		string mail = "";
		mail += v[v.size() - 1];

		// Nối họ và tên đệm vô mail
		for (int i = 0; i < v.size() - 1; i++)
			mail += v[i][0];

		// kiểm tra có xuất hiện chưa trong map
		
		if (mp.count(mail) == 0)
		{
			// nếu là lần đầu tiên thì ko cần in số 1 và đánh dấu xuất hiện trong map 1 lần
			cout << mail << "@gmail.com" << endl;
			mp[mail] = 1;
		}
		else
		{
			// trường hợp 2 thì lưu số thứ tự lại và tăng lên xong xuất ra mail + stt và cập nhập lại stt mới trong map
			int tt = mp[mail];
			tt++;
			cout << mail << tt << "@gmail.com" << endl;
			mp[mail] = tt;
		}

	}
	return 0;
}

void VietThuong(string& s)
{
	for (int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
}