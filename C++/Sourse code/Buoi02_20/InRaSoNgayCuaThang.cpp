/*
    C++ Buổi 02_Bài 20.In ra số ngày của tháng.
    Cho biết tháng và năm, hãy in ra số ngày tương ứng có trong tháng đó.
	Input Format:
		2 số nguyên t, n lần lượt là tháng và năm. (-10^6 ≤ t, n ≤ 10^6).
	Output Format
		Nếu tháng và năm nhập vào không hợp lệ ( tháng, năm không phải là số dương hoặc bằng 0, 
		tháng không năm trong các số từ 1 tới 12) in ra "INVALID", 
		ngược lại in ra số ngày trong năm. 
		Chú ý tháng 2 của năm nhuận
		(Năm nhuận là năm chia hết cho 400 hoặc (chia hết cho 4 và không chia hết cho 100)) có 29 ngày.
	Ví dụ:
	Dữ liệu vào:
	12 2020
	Dữ liệu ra:
	31
*/

// 2.20
#include <iostream>

using namespace std;

bool isLeapYear(int year)
{
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int days(int month, int year)
{
    if (month < 1 || month > 12 || year <= 0) return -1;
    int ans;
    switch (month)
    {
    case 2:
        ans = isLeapYear(year) ? 29 : 28;

        break;
    case 4:
    case 6:
    case 9:
    case 11:
        ans = 30;
        break;
    default:
        ans = 31;
        break;
    }
    return ans;
}

int main()
{
    int t, n;
    cin >> t >> n;
    if (days(t, n) == -1) cout << "INVALID";
    else cout << days(t, n);
}